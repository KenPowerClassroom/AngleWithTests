#pragma once
#include<numbers> // pi

//Note to students: do not change any code in this file above the line of asterixes ****
class Angle {

private:
	static double radianToDegree(double radians) {
		return (radians / TWO_PI) * DEGREES_IN_CIRCLE;
	}

	explicit Angle(double degree):degree(degree) {} // make this private so users forced to use factory methods
	const double degree;				// value objects should not be modifiable

public:
	static const long DEGREES_IN_CIRCLE = 360;
	static const double PI;
	static const double TWO_PI;
//**************************************************************************************
//Note to students: do not change ANY code  file above this line
//You are welcome to change or add code below this line.

private:

public:
	static Angle fromDegrees(double degrees) {
		//Hint: a degree can only have range 0 to 359.9999... 
		return Angle{ degrees };
	}

	double degrees() {
		return degree;
	}
};

const double Angle::PI = std::numbers::pi;
const double Angle::TWO_PI = 2 * Angle::PI;
