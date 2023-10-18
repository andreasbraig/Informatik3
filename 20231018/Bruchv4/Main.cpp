// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "KBruch.h"


using namespace std;


int main()
{
	KBruch a (2, 6);
	KBruch b (25, 100);

	cout << a << endl << b << endl;

	a.kuerzen();
	b.kuerzen();

	cout << a << endl << b << endl;

	return(0);
}
