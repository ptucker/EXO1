#include "EvenNumber.h"
#include <iostream>
using namespace std;

int main()
{
	EvenNumber EvenNum1;
	EvenNumber EvenNum2(16);
	cout << "The current even number is: " << EvenNum2.GetValue() << endl;
	cout << "The next even number is: " << EvenNum2.GetNext() << endl;
	cout << "The previous even number is: " << EvenNum2.GetPrevious() << endl;

	return (0);
}