/*
* Copyright (C) 2007-2014 German Aerospace Center (DLR/SC)
*
* Created: 2014-02-10 Tobias Stollenwerk <Tobias.Stollenwerk@dlr.de>
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
/**
* @file
* @brief Tests for wing guide curves
*/

#include "test.h" // Brings in the GTest framework
#include "tigl.h"
#include "testUtils.h"
#include "tiglcommonfunctions.h"
#include "CTiglLogging.h"
#include "CSharedPtr.h"
#include "CCPACSConfigurationManager.h"
#include "BRep_Tool.hxx"
#include "BRepBuilderAPI_MakeWire.hxx"
#include "BRepTools_WireExplorer.hxx"
#include "Geom_Curve.hxx"
#include "Geom_Plane.hxx"
#include "gp_Pnt.hxx"
#include "gp_Vec.hxx"
#include "GeomAPI_IntCS.hxx"
#include "GeomAPI_ProjectPointOnCurve.hxx"
#include "CTiglError.h"
#include "CTiglTransformation.h"
#include "CTiglLogging.h"
#include "CCPACSGuideCurveProfile.h"
#include "CCPACSGuideCurveProfiles.h"
#include "CCPACSWingProfileGetPointAlgo.h"
#include "CCPACSGuideCurveAlgo.h"

/******************************************************************************/

class WingGuideCurve : public ::testing::Test
{
protected:
    virtual void SetUp()
    {
        const char* filename = "TestData/simple_test_guide_curves.xml";
        ReturnCode tixiRet;
        TiglReturnCode tiglRet;

        tiglHandle = -1;
        tixiHandle = -1;

        tixiRet = tixiOpenDocument(filename, &tixiHandle);
        ASSERT_TRUE (tixiRet == SUCCESS);
        tiglRet = tiglOpenCPACSConfiguration(tixiHandle, "GuideCurveModel", &tiglHandle);
        ASSERT_TRUE(tiglRet == TIGL_SUCCESS);

        // get guide curve
        //tigl::CCPACSGuideCurve & guideCurve = config.GetGuideCurve("GuideCurveModel_Wing_Sec1_El1_Pro");

        // constant values for the guide curve points
        const double tempy[] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9};
        beta=std::vector<double>(tempy, tempy + sizeof(tempy) / sizeof(tempy[0]) );
        const double tempz[] = {0.0, 0.001, 0.003, 0.009, 0.008, 0.007, 0.006, 0.002, 0.0};
        gamma=std::vector<double>(tempz, tempz + sizeof(tempz) / sizeof(tempz[0]) );
    }

    void TearDown()
    {
        ASSERT_TRUE(tiglCloseCPACSConfiguration(tiglHandle) == TIGL_SUCCESS);
        ASSERT_TRUE(tixiCloseDocument(tixiHandle) == SUCCESS);
        tiglHandle = -1;
        tixiHandle = -1;
    }

    TixiDocumentHandle           tixiHandle;
    TiglCPACSConfigurationHandle tiglHandle;
    //tigl::CCPACSGuideCurve guideCurve;
    std::vector<double> alpha;
    std::vector<double> beta;
    std::vector<double> gamma;
};


/******************************************************************************/

/**
* Tests if data was read in correctly
*/
/*
TEST_F(WingGuideCurve, tiglWingGuideCurveProfile_readData)
{
    double x;
    double y;
    double z;
    for (int i=0; i!=10; i++) {
        ASSERT_TRUE(tiglWingGetUpperPoint(tiglHandle, 1, 1, 0.1*i, 0.0, &x, &y, &z) == TIGL_SUCCESS);
        ASSERT_EQ(x, 0.0);
        ASSERT_EQ(z, 0.0);
        ASSERT_NEAR(y, 5*0.1*i, 1E-10);
    }
}
*/

/**
* Tests CCPACSGuideCurveProfile class
*/
TEST_F(WingGuideCurve, tiglWingGuideCurve_CCPACSGuideCurveProfile)
{
    tigl::CCPACSGuideCurveProfile guideCurve("/cpacs/vehicles/profiles/guideCurveProfiles/guideCurveProfile[7]");
    guideCurve.ReadCPACS(tixiHandle);
    ASSERT_EQ(guideCurve.GetUID(), "GuideCurveModel_Wing_GuideCurveProfile_LeadingEdge_NonLinear");
    ASSERT_EQ(guideCurve.GetName(), "NonLinear Leading Edge Guide Curve Profile for GuideCurveModel - Wing");
    ASSERT_EQ(guideCurve.GetFileName(), "/cpacs/vehicles/profiles/guideCurveProfiles/guideCurveProfile[7]");
}

/**
* Tests CCPACSGuideCurveProfiles class
*/
TEST_F(WingGuideCurve, tiglWingGuideCurve_CCPACSGuideCurveProfiles)
{
    tigl::CCPACSGuideCurveProfiles guideCurves;
    guideCurves.ReadCPACS(tixiHandle);
    ASSERT_EQ(guideCurves.GetGuideCurveProfileCount(), 9);
    tigl::CCPACSGuideCurveProfile& guideCurve = guideCurves.GetGuideCurveProfile("GuideCurveModel_Wing_GuideCurveProfile_LeadingEdge_NonLinear");
    ASSERT_EQ(guideCurve.GetUID(), "GuideCurveModel_Wing_GuideCurveProfile_LeadingEdge_NonLinear");
    ASSERT_EQ(guideCurve.GetName(), "NonLinear Leading Edge Guide Curve Profile for GuideCurveModel - Wing");
    ASSERT_EQ(guideCurve.GetFileName(), "/cpacs/vehicles/profiles/guideCurveProfiles/guideCurveProfile[7]");
}

/**
* Tests CCPACSWingProfileGetPointAlgo class
*/
TEST_F(WingGuideCurve, tiglWingGuideCurve_CCPACSWingProfileGetPointAlgo)
{
    // read configuration
    tigl::CCPACSConfigurationManager& manager = tigl::CCPACSConfigurationManager::GetInstance();
    tigl::CCPACSConfiguration& config = manager.GetConfiguration(tiglHandle);

    // get upper and lower wing profile
    tigl::CCPACSWingProfile& profile = config.GetWingProfile("GuideCurveModel_Wing_Sec3_El1_Pro");
    TopoDS_Wire upperWire = profile.GetUpperWire();
    TopoDS_Wire lowerWire = profile.GetLowerWire();

    // concatenate wires
    BRepBuilderAPI_MakeWire wireBuilder(upperWire);
    wireBuilder.Add(lowerWire);
    ASSERT_TRUE(wireBuilder.IsDone());
    TopoDS_Wire wire=wireBuilder.Wire();

    // instantiate getPointAlgo
    tigl::CCPACSWingProfileGetPointAlgo getPointAlgo(wire);
    gp_Pnt point;
    gp_Vec tangent;

    // plot points and tangents
    int N = 20;
    int M = 2;
    for (int i=0; i<=N+2*M; i++) {
        double da = 2.0/double(N);
        double alpha = -1.0 -M*da + da*i;
        getPointAlgo.GetPointTangent(alpha, point, tangent);
        outputXY(i, point.X(), point.Z(), "./TestData/analysis/tiglWingGuideCurve_profileSamplePoints_points.dat");
        outputXYVector(i, point.X(), point.Z(), tangent.X(), tangent.Z(), "./TestData/analysis/tiglWingGuideCurve_profileSamplePoints_tangents.dat");
        // plot points and tangents with gnuplot by:
        // echo "plot 'TestData/analysis/tiglWingGuideCurve_profileSamplePoints_tangents.dat' u 1:2:3:4 with vectors filled head lw 2, 'TestData/analysis/tiglWingGuideCurve_profileSamplePoints_points.dat' w linespoints lw 2" | gnuplot -persist
    }

    // leading edge: point must be zero and tangent must be in z-direction
    getPointAlgo.GetPointTangent(0.0, point, tangent);
    ASSERT_NEAR(point.X(), 0.0, 1E-10);
    ASSERT_NEAR(point.Y(), 0.0, 1E-10);
    ASSERT_NEAR(point.Z(), 0.0, 1E-10);
    ASSERT_NEAR(tangent.X(), 0.0, 1E-10);
    ASSERT_NEAR(tangent.Y(), 0.0, 1E-10);

    // lower trailing edge
    getPointAlgo.GetPointTangent(-1.0, point, tangent);
    ASSERT_NEAR(point.X(), 1.0, 1E-5);
    ASSERT_NEAR(point.Y(), 0.0, 1E-10);
    ASSERT_NEAR(point.Z(), -0.003, 1E-5);

    // upper trailing edge
    getPointAlgo.GetPointTangent(1.0, point, tangent);
    ASSERT_NEAR(point.X(), 1.0, 1E-10);
    ASSERT_NEAR(point.Y(), 0.0, 1E-10);
    ASSERT_NEAR(point.Z(), 0.00126, 1E-10);

    // check if tangent is constant for alpha > 1
    gp_Vec tangent2;
    getPointAlgo.GetPointTangent(1.0, point, tangent);
    getPointAlgo.GetPointTangent(2.0, point, tangent2);
    ASSERT_EQ(tangent.X(), tangent2.X());
    ASSERT_EQ(tangent.Y(), tangent2.Y());
    ASSERT_EQ(tangent.Z(), tangent2.Z());

    // check if tangent is constant for alpha < 1
    getPointAlgo.GetPointTangent(-1.0, point, tangent);
    getPointAlgo.GetPointTangent(-2.0, point, tangent2);
    ASSERT_EQ(tangent.X(), tangent2.X());
    ASSERT_EQ(tangent.Y(), tangent2.Y());
    ASSERT_EQ(tangent.Z(), tangent2.Z());
}

/**
* Tests CCPACSGuideCurveAlgo class
*/
TEST_F(WingGuideCurve, tiglWingGuideCurve_CCPACSGuideCurveAlgo)
{
    // read configuration
    tigl::CCPACSConfigurationManager& manager = tigl::CCPACSConfigurationManager::GetInstance();
    tigl::CCPACSConfiguration& config = manager.GetConfiguration(tiglHandle);

    // get inner wing profiles
    tigl::CCPACSWingProfile& innerProfile = config.GetWingProfile("GuideCurveModel_Wing_Sec3_El1_Pro");
    TopoDS_Wire upperInnerWire = innerProfile.GetUpperWire();
    TopoDS_Wire lowerInnerWire = innerProfile.GetLowerWire();
    // concatenate wires
    BRepBuilderAPI_MakeWire innerWireBuilder(upperInnerWire);
    innerWireBuilder.Add(lowerInnerWire);
    ASSERT_TRUE(innerWireBuilder.IsDone());
    TopoDS_Wire innerWire=innerWireBuilder.Wire();

    // get outer wing profiles
    tigl::CCPACSWingProfile& outerProfile = config.GetWingProfile("GuideCurveModel_Wing_Sec3_El1_Pro");
    TopoDS_Wire upperOuterWireLocal = outerProfile.GetUpperWire();
    TopoDS_Wire lowerOuterWireLocal = outerProfile.GetLowerWire();

    // translate outer wing profiles
    tigl::CTiglTransformation trans;
    trans.SetIdentity();
    trans.AddTranslation(0.0, 1.0, 0.0);
    trans.AddScaling(2.0, 1.0, 1.0);
    TopoDS_Wire lowerOuterWire = TopoDS::Wire(trans.Transform(lowerOuterWireLocal));
    TopoDS_Wire upperOuterWire = TopoDS::Wire(trans.Transform(upperOuterWireLocal));

    // concatenate wires
    BRepBuilderAPI_MakeWire outerWireBuilder(upperOuterWire);
    outerWireBuilder.Add(lowerOuterWire);
    ASSERT_TRUE(outerWireBuilder.IsDone());
    TopoDS_Wire outerWire=outerWireBuilder.Wire();

    // get guide curve profile
    CSharedPtr<tigl::CCPACSGuideCurveProfile> PGuideCurveProfile(new tigl::CCPACSGuideCurveProfile("/cpacs/vehicles/profiles/guideCurveProfiles/guideCurveProfile[7]"));

    PGuideCurveProfile->ReadCPACS(tixiHandle);

    TopoDS_Wire guideCurveWire;
    // instantiate guideCurveAlgo
    guideCurveWire = tigl::CCPACSGuideCurveAlgo<tigl::CCPACSWingProfileGetPointAlgo> (innerWire, outerWire, 0.0, 0.0, 1.0, 2.0, PGuideCurveProfile);

    // check is guide curve runs through sample points
    // get curve
    Standard_Real u1, u2;
    BRepTools_WireExplorer guideCurveExplorer(guideCurveWire);
    Handle(Geom_Curve) curve =  BRep_Tool::Curve(guideCurveExplorer.Current(), u1, u2);
    // set predicted sample points from cpacs file
    // minus sign and x instead of z component due to rotation of pi/2 at the leading edge (alpha=0)
    const double temp[] = {-0.0, -0.0, -0.001, -0.003, -0.009, -0.008, -0.007, -0.006, -0.002, -0.0, -0.0};
    std::vector<double> predictedSamplePointsX (temp, temp + sizeof(temp) / sizeof(temp[0]) );
    for (unsigned int i = 0; i <= 10; ++i) {
        // get intersection point of the guide curve with planes parallel to the x-z plane located at b
        double b = i/double(10);
        Handle(Geom_Plane) plane = new Geom_Plane(gp_Pnt(0.0, b, 0.0), gp_Dir(0.0, 1.0, 0.0));
        GeomAPI_IntCS intersection (curve, plane);
        ASSERT_TRUE(intersection.IsDone());
        ASSERT_EQ(intersection.NbPoints(), 1);
        gp_Pnt point = intersection.Point(1);

        // scale sample points since 2nd profile is scaled by a factor 2
        predictedSamplePointsX[i]*=(1.0+(2.0-1.0)*b);
        // check is guide curve runs through the predicted sample points
        ASSERT_NEAR(predictedSamplePointsX[i], point.X(), 1E-14);
        ASSERT_NEAR(b, point.Y(), 1E-14);
        ASSERT_NEAR(0.0, point.Z(), 1E-14);
    }
}

/**
* Tests if B-spline guide curve intersects the sample points
*/
TEST_F(WingGuideCurve, tiglWingGuideCurve_samplePoints)
{
    /*
    Standard_Real u1, u2;
    TopoDS_Wire guideCurveWire = guideCurve.GetWire();
    BRepTools_WireExplorer guideCurveExplorer(guideCurveWire);
    Handle(Geom_Curve) curve =  BRep_Tool::Curve(guideCurveExplorer.Current(), u1, u2);
    // project sample points on curve and check distance
    for (unsigned int i = 0; i < beta.size(); ++i) {
        gp_Pnt samplePoint(Standard_Real(0.0), Standard_Real(beta[i]), Standard_Real(gamma[i]));
        GeomAPI_ProjectPointOnCurve projection(samplePoint, curve);
        gp_Pnt projectedPoint=projection.NearestPoint();
        outputXY(i, samplePoint.X(), samplePoint.Z(), "./TestData/analysis/tiglGuideCurve_samplePoints_cst.dat");
        outputXY(i, projectedPoint.X(), projectedPoint.Z(), "./TestData/analysis/tiglGuideCurve_samplePoints_bspline.dat");
        ASSERT_NEAR(0., samplePoint.Distance(projectedPoint), 1e-10);
    }
    */
}



