#include "pch.h"
#include "../AngleWithTests/Angle.h"

double epsilon = 0.0000001;

//This test should be passing without you needing to make changes
TEST(AngleTest, CanCreateWithDegrees) { 
	Angle a = Angle::fromDegrees(45);

	EXPECT_DOUBLE_EQ(45, a.degrees());
}

//This test will fail until you fix the Angle class 
TEST(AngleTest, WrapsAoundWhenGreaterThan360) {
	Angle a = Angle::fromDegrees(360);
	Angle b = Angle::fromDegrees(725);

	EXPECT_DOUBLE_EQ(0, a.degrees());
	EXPECT_DOUBLE_EQ(5, b.degrees());

}

//===========================================
// Note to students:
// 
// Do not change any of the tests in this file
//
// You can uncomment one test at a time. 
// You must get the test to pass before uncommenting the next test 
// Get a test to pass by adding/chaging code in the file Angle.h
// Do not modify the test in order to get it to pass.
//==========================================

//TEST(AngleTest, WrapsAoundWhenLessThan0) {
//	Angle a = Angle::fromDegrees(-0.01);
//	Angle b = Angle::fromDegrees(-719.99);
//
//	EXPECT_NEAR(359.99, a.degrees(), epsilon);
//	EXPECT_NEAR(0.01,   b.degrees(), epsilon);
//}
//
//TEST(AngleTest, CreateWithRadian) {
//	Angle a = Angle::fromRadians(Angle::PI);
//	Angle b = Angle::fromRadians(-Angle::PI/4);
//
//	EXPECT_NEAR(180, a.degrees(), epsilon);
//	EXPECT_NEAR((360-45), b.degrees(), epsilon);
//}
//
//TEST(AngleTest, GetRadiansValue) {
//	Angle a = Angle::fromRadians(Angle::PI/3);
//	Angle b = Angle::fromDegrees(60);
//
//	EXPECT_NEAR(Angle::PI / 3, a.radians(), epsilon);
//	EXPECT_NEAR(Angle::PI / 3, b.radians(), epsilon);
//}
//
//
//TEST(AngleTest, CompareGreater) {
//	Angle a = Angle::fromRadians(45);
//	Angle b = Angle::fromRadians(45.01);
//
//	EXPECT_FALSE(a > b);
//	EXPECT_TRUE(b > a);
//}
//
//TEST(AngleTest, CompareLessThan) {
//	Angle a = Angle::fromRadians(45);
//	Angle b = Angle::fromRadians(45.01);
//
//	EXPECT_TRUE(a < b);
//	EXPECT_FALSE(b < a);
//}
//
//TEST(AngleTest, SumAngles) {
//	Angle a = Angle::fromRadians(Angle::PI);
//	Angle b = Angle::fromDegrees(190);
//
//	Angle c = a + b;
//
//	EXPECT_NEAR(10, c.degrees(), epsilon);
//}
//
//TEST(AngleTest, DifferenceAngles) {
//	Angle a = Angle::fromRadians(Angle::PI);
//
//	Angle c = a - Angle::fromDegrees(190);
//
//	EXPECT_NEAR(350, c.degrees(), epsilon);
//}