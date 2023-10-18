// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Bruch.h"


using namespace std;


int main()
{
	Bruch* a;
	Bruch* b;
	Bruch c(1,3);
	Bruch d;

	a = new Bruch;
	b = new Bruch[10];

	if (1 >= c)
	{
		d = 2;
	}

	cout << "Bruch *a = " << *a << endl;
	cout << "Bruch b[0] = " << b[0] << endl;
	cout << "Bruch c = " << c << endl;
	cout << "Bruch d = " << d << endl;

	delete a;
	delete[] b;

	return(0);
}
