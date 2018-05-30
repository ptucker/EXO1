#include "MyInteger.h"
#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	MyInteger Integer(num);
	Integer.isEven(num);
	string& wat = "Help";
	Integer.parseInt(wat);
	return (0);

	//the book didn't ask for any cout
	//this problem and also EX03_01 took me six hours each to complete, is that normal with these chapters?
}