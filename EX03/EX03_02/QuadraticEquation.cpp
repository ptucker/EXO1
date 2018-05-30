#include "QuadraticEquation.h"
#include <cmath>

//PT -- 17/20

void QuadraticEquation::Set(double Newa, double Newb, double Newc)	//could not use the class as the type
{
	a = Newa;
	b = Newb;
	c = Newc;
}

//PT -- missing getA(), getB(), and getC(). You have a, b, c as public, which is ok, but bad practice.

//PT -- Function should use member variables, not parameters.
// -2
double QuadraticEquation::GetDiscriminant(double a, double b, double c)
{
	Discriminant = (pow(b, 2) - 4 * a*c);
	return Discriminant;
}

double QuadraticEquation::GetRoot1(double a, double b, double c)
{
	double x;
	//PT -- Instead of using the member variable, call GetDiscriminant().
	//      You're relying on the user to call GetDiscriminant before calling GetRoot1().
	// -1
	x = ((-b - sqrt(Discriminant)) / (2 * a));
	return (x);
}
double QuadraticEquation::GetRoot2(double a, double b, double c)
{
	double x;
	x = ((-b + sqrt(Discriminant)) / (2 * a));
	return (x);
}
