// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "MyString.h"


using namespace std;


int main()
{
    MyString a;
    MyString b = "Test";
    MyString Demo= "Ich möchte hier mal einen String mit wesentlich mehr als 100 Zeichen erstellen mal schauen ob ich das hinbekomme könnte schwierig werden ";

    a.print();
    printf("Laenge a=%d\n", a.length());

    MyString c = b;

    a = c;

    a.print();
    printf("Laenge a=%d\n", a.length());

    Demo.print();
    printf("Laenge a 0 %d \n", Demo.length());

}

