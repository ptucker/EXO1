#ifndef MYINTEGER_H_
#define MYINTEGER_H_

class MyInteger
{
private:
	int value;
public:
	MyInteger();
	MyInteger(int);
	const int GetInteger();
	const bool isEven();
	const bool isOdd();
	const bool isPrime();
	static bool isEven(int);
	static bool isOdd(int);
	static bool isPrime(int);
	static bool isEven(MyInteger&);
	static bool isOdd(MyInteger&);
	static bool isPrime(MyInteger&);
	const bool equals(int);
	const bool equals(const MyInteger&);
	static int parseInt(const string&);
};

#endif
