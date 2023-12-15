#pragma once
#include <math.h>
# define PI 3.14159265359


struct PointXY
{
	double X;
	double Y;
};

struct PointPolar
{
	double theta;
	double radius;

};

 PointXY PolarToXY(PointPolar inPP)
{
	 PointXY i{};

	 i.X = inPP.radius * cos(inPP.theta);
	 i.Y = inPP.radius * sin(inPP.theta);

	 return (i);
}

 PointPolar XYToPolar(PointXY inPXY)
 {
	 PointPolar i{};
	 double aaa = 1.1;

	 i.radius =  sqrt(pow(inPXY.X,2) + pow(inPXY.Y,2));
	 i.theta = atan(inPXY.Y/inPXY.X);

	 return (i);
 }