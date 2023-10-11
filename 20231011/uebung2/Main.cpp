// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "MyString.h"


using namespace std;


int main()
{
    MyString a;
    MyString b = "Test";

    a.print();
    printf("Laenge a=%d\n", a.length());

    MyString c = b;

    a = c;

    a.print();
    printf("Laenge a=%d\n", a.length());
}

