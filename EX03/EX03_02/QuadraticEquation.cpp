#include "QuadraticEquation.h"
#include <cmath>
void QuadraticEquation::Set(double Newa, double Newb, double Newc)	//could not use the class as the type
{
	a = Newa;
	b = Newb;
	c = Newc;
}

double QuadraticEquation::GetDiscriminant(double a, double b, double c)
{
	Discriminant = (pow(b, 2) - 4 * a*c);
	return Discriminant;
}

double QuadraticEquation::GetRoot1(double a, double b, double c)
{
	double x;
	x = ((-b - sqrt(Discriminant)) / (2 * a));
	return (x);
}
double QuadraticEquation::GetRoot2(double a, double b, double c)
{
	double x;
	x = ((-b + sqrt(Discriminant)) / (2 * a));
	return (x);
}