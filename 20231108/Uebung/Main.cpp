// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <exception>
#include "MyString.h"


using namespace std;


static const char* auswahl[] =
{
    "Beispiel",
    "Auswahl",
    "Noch einmal"
};


int main()
{
    bool repeat;
    unsigned i;
    MyString a;

    /* Initialisiern des Zufallsgenerators */
    srand((int)time(NULL));
    do
    {
        repeat = false;
        /* zufaellige Auswahl eines Textes */
        a = auswahl[rand() % 3];

        cout << "Ausgewaehltes Wort: >" << a << "<" << endl;
        cout << "Selektieren Sie einen Buchstaben [1-" << a.length() << "):" << endl;
        cin >> i;
        try
        {
            cout << "Selektierter Buchstabe: >" << a[i-1] << "<" << endl;
        }
        catch (out_of_range)
        {
            repeat = true;
            cout << "Falsche Auswahl - noch einmal versuchen ..." << endl;
        }
        catch (exception)
        {
            cerr << "Unerwarteter Fehler" << endl;
            exit(1);
        }
    } while (repeat);

    return(0);
}
