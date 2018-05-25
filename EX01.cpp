// EXO1_02.cpp : Defines the entry point for the console application.
//if file is not compatible, copy program onto your version of C++ and remove "stdafx.h" and quotations around libraries

//ex01_01: 20/20
//ex01_02: 20/20
//ex01_03: 16/20
//ex01_04: 18/20
//ex01_05: 20/20

//TOTAL: 94/100

//answer to video prompt about possitive and negative effects of software
//negative: software gives us a facade to hide behind and gives us excuses to not physically meet with people
//possitive: software connects the entire world and gives us means to communicate and share/access near-infinite information

//ex01_1
/*
a) CPU
b) RAM
c) on a disk
d) a binary digit, like 1 or 0
e) address
f) 8 bits
g) all of the above
h) processes applications for jobs, school admissions, etc.
*/

#include "stdafx.h"
//PT -- #include <iostream>
// < > means something different to the compiler than ""
#include "iostream"
#include "ctime"
#include "cstdlib"
#include "cmath"
#include "string"
using namespace std;

void ex02();
void ex03();
void ex04();
int ex04_e(int);
int add(int, int);
void ref(int&);
void ex05();
void dispArray(int[], int);
void search(int[], int);

int main()
{
	srand(time(0));
	ex02();
	ex03();
	ex04();
	ex05();
	return 0;
}

void ex02()
{
	cout << "ex02" << endl;
	//a
	bool hasPassedTest = true;
	cout << hasPassedTest << endl; // some of the cout statements (such as this) are not required

	//b
	//srand is found in main()
	int x = rand();
	int y = rand();
	if (x > y)
		cout << "x is greater than y" << endl;
	else if (x == y)
		cout << "x is equal to y" << endl;
	else
		cout << "x is less than y" << endl;

	//c
	int numberOfShares;
	cout << "Enter a value for numberOfShares: ";
	cin >> numberOfShares;
	if (numberOfShares < 100)
		cout << "The value is less than 100" << endl;
	else
		cout << "The value is not less than 100" << endl;

	//d
	int boxWidth;
	int bookWidth;
	cout << "Enter a value for boxWidth: ";
	cin >> boxWidth;
	cout << "Enter a value for bookWidth: ";
	cin >> bookWidth;
	double yee = boxWidth % bookWidth;
	if (yee == 0)
		cout << "boxWidth is divisible by bookWidth" << endl;
	else
		cout << "boxWidth is not divisible by bookWidth" << endl;

	//e
	int shelfLife;
	int outsideTemp;
	cout << "Enter a value for shelfLife: ";
	cin >> shelfLife;
	cout << "Enter a value for outsideTemp: ";
	cin >> outsideTemp;
	if (outsideTemp > 90)
		cout << "The tempurature is too high so the life of the chocolate will only be: " << (shelfLife / 4) << endl;
	else
		cout << "The tempurature is okay and will not affect shelfLife" << endl;
}

void ex03()
{
	cout << endl<< "ex03" << endl;
	//a
	int width;
	cout << "Enter the width of the square: ";
	cin >> width;
	cout << "The length of the diagonal is: " << sqrt((width*width) * 2) << endl;

	//b
	char yorn;
	cout << "Pick 'yes' or 'no' by entering 'y' or 'n', respectively: ";
	cin >> yorn;
	if (yorn == 'y')
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	//c
	//PT -- char tab = '\t';
	// -2
	char tab = 'Q';
	cout << "\t" << tab << endl;
	//instructions on this seemed a little foggy, but I did what I could

	//d
	string mailingAddress;
	cout << "Enter a mailing address: ";
	cin >> mailingAddress;

	//e
	//PT -- string emptyString = "";
	// -2
	string emptyString="Not So Empty";
	cout << emptyString<<endl;
}

void ex04()
{
	cout << endl<<"ex04" << endl;
	//a
	int number;
	//PT -- this will keep looping even when given a valid number (e.g. 7)
	// -2
	for (int i = 0; i != 1;)
	{
		cout << "Enter a value between 1 and 10: ";
		cin >> number;
		if (number > 10 || number < 1)
			cout << "Error. That is not a valid number." << endl;
		else
			cout << "Success!" << endl;
	}

	//b
	int sum=0;
	for (int i = 0; i < number;i++)
	{
		sum = sum + (pow(number, 3));
	}
	cout << "The sum of the cubes' areas is: " << sum << endl;

	//c
	int doWhile = 0;
	do
	{
		cout << "*";
		doWhile++;
	}while (doWhile < number);
	cout << endl;

	//d
	//PT -- could increment by 2 here
	// for (int i=0; i<40; i+=2)
	for (int i = 0; i < 40; i++)
	{
		if (i % 2 == 0)
			cout << i << "  ";	//endl is placed outside in order to condense the console output
	}
	cout << endl;

	//e
	cout<< ex04_e(number);	//all functions are found at the bottom

	//f
	int e = rand();
	int f = rand();
	cout << add(e, f);

	//g
	int pass = 1;
	ref(pass);
}

void ex05()
{
	cout << endl<<"ex05" << endl;
	//a
	int aArray[5];
	cout << "Enter five different values: ";
	for (int i = 0; i <= 5; i++)
		cin >> aArray[i];

	//b
	int asum=0;
	int aproduct=0;
	int sz = 5;
	for (int i = 0; i <= sz; i++)
	{
		asum = asum + aArray[i];
		aproduct = aproduct + aArray[i];
	}
	cout << "The sum of the array values = " << asum << endl;
	cout << "The product of the array values = " << aproduct << endl;

	//c
	dispArray(aArray, sz);

	//d
	search(aArray, sz);
}

////////////////////////////////////end of homework functions//////////////////////////////////

int ex04_e(int number)
{
	int yay = number * 2;
	return (yay);
}

int add(int e, int f)
{
	return (e + f);
}

void ref(int& pass)
{
	pass ++ ;
}

void dispArray(int aArray[], int sz)
{
	for (int i = 0; i < sz; i++)
		cout << aArray[i] << " ";
	cout << endl;
}

void search(int aArray[], int sz)
{
	int temp;
	int test=0;
	cout << "Enter a guess (as an integer)";
	cin >> temp;
	for (int i = 0; i < sz; i++)
	{
		if (aArray[i] == temp)
			test = 1;
	}
	if (test = 1)
		cout << "The Array contains your guess" << endl;
	else
		cout << "The Array does not contain your guess" << endl;
}
