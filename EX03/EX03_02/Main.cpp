
#include <iostream>
#include "QuadraticEquation.h"
using namespace std;

int main()
{
	QuadraticEquation QE;
	double a, b, c;
	cout << "Discover your inner self by discovering the value of x in the Quadratic Equation: ax^2 + bx +c" << endl;
	cout << "Enter a value for 'a': ";
	cin >> a;
	cout << "Enter a value for 'b': ";
	cin >> b;
	cout << "Enter a value for 'c': ";
	cin >> c;
	QE.Set(a, b, c);
	QE.GetDiscriminant(a, b, c);
	if (QE.GetDiscriminant(a, b, c) > 0)
		cout << "x= " << QE.GetRoot1(a, b, c) << "  &  x= " << QE.GetRoot2(a, b, c) << endl;
	else if (QE.GetDiscriminant(a, b, c) == 0)
		cout << "x= " << QE.GetRoot1(a, b, c) << endl;
	else
		cout << "The equation has no real roots." << endl;
	int end;

	return (0);
}