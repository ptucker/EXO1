
#include <cstdio> //the console kept closing right away, included this in order to keep it up (thanks to the internet's help)
#include "Fan.h"
#include <iostream>
using namespace std;

int main() {
	Fan Fan1;		//This defines the properties of the first object
	cout << "Fan1: " << endl;
	Fan1.TurnOn();
	Fan1.SetRadius(10);
	Fan1.SetSpeed(3);
	if (Fan1.On == true)	//I considered making a function for this but decided that for the sake of this exercise, it didn't really matter
		cout << "The Fan is: on" << endl;
	else
		cout << "The Fan is: off" << endl;
	cout <<"The radius is: "<< Fan1.Radius << endl;
	cout <<"The speed is set to: "<< Fan1.GetSpeed << endl;

	Fan Fan2;		//second object
	cout << "Fan2: " << endl;
	Fan2.TurnOff();
	Fan2.SetRadius(5);
	Fan2.SetSpeed(2);
	if (Fan2.On == true)
		cout << "The Fan is: on" << endl;
	else
		cout << "The Fan is: off" << endl;
	cout << "The radius is: " << Fan2.Radius << endl;
	cout << "The speed is set to: " << Fan2.GetSpeed << endl;

	cout << endl << "Press any key to continue..." << endl;	//these two lines are part of <cstdio>
	std::getchar();
}