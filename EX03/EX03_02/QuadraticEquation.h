#ifndef QUADRATICEQUATION_H_
#define QUADRATICEQUATION_H_

class QuadraticEquation
{
private:
	double Discriminant;
	//double QuadraticEquation = (a*pow(x, 2) + b * x + c);
public:
	//PT -- should be private
	double a,b,c;
	void Set(double, double, double);
	double GetDiscriminant(double, double, double);
	double GetRoot1(double a, double b, double c);
	double GetRoot2(double a, double b, double c);
};
#endif
