#include <iostream>
#include "Bruch.h"


using namespace std;


/* Konstruktoren */

Bruch::Bruch(int i)
{
	/* initialisiere mit i 1-tel */
	zaehler = i;
	nenner = 1;
}


Bruch::Bruch(int z, int n)
{
	if (n == 0)
	{
		cerr << "Fehler: Nenner 0" << endl;
		exit(1);
	}

	/* Nenner muss immer positiv sein */
	if (n < 0)
	{
		zaehler = -z;
		nenner = -n;
	}
	else
	{
		zaehler = z;
		nenner = n;
	}
}


/* Destruktor */

Bruch::~Bruch()
{
	/* keine Aktion notwendig */
}


/* Methoden */

void Bruch::printOn(ostream& strm) const
{
	strm << zaehler << "/" << nenner;
}


/* Klassen Operatoren */

const Bruch& Bruch::operator = (const Bruch& b)
{
	/* Zuweisung an sich selbst? */
	if (this == &b)
	{
		return (*this);
	}

	zaehler = b.zaehler;
	nenner = b.nenner;

	return (*this);
}


Bruch Bruch::operator + (const Bruch& b) const
{
	int neuZaehler, neuNenner;

	neuZaehler = (zaehler * b.nenner) + (b.zaehler * nenner);
	neuNenner = nenner * b.nenner;

	return(Bruch(neuZaehler, neuNenner));
}


Bruch Bruch::operator - (const Bruch& b) const
{
	/* kuerzen sparen wir uns */
	return(Bruch((zaehler * b.nenner) - (b.zaehler * nenner), nenner * b.nenner));
}


Bruch Bruch::operator * (const Bruch& b) const
{
	/* kuerzen sparen wir uns */
	return(Bruch(zaehler * b.zaehler, nenner * b.nenner));
}


Bruch Bruch::operator / (const Bruch& b) const
{
	if (b.zaehler == 0)
	{
		cerr << "Fehler: Division durch 0" << endl;
		exit(1);
	}
	/* kuerzen sparen wir uns */
	return(Bruch(zaehler * b.nenner, nenner * b.zaehler));
}


bool Bruch::operator == (const Bruch& b) const
{
	return(zaehler * b.nenner == b.zaehler * nenner);
}


bool Bruch::operator != (const Bruch& b) const
{
	return(zaehler * b.nenner != b.zaehler * nenner);
}


bool Bruch::operator < (const Bruch& b) const
{
	return(zaehler * b.nenner < b.zaehler * nenner);
}


bool Bruch::operator <= (const Bruch& b) const
{
	return(zaehler * b.nenner <= b.zaehler* nenner);
}


bool Bruch::operator > (const Bruch& b) const
{
	return(zaehler * b.nenner > b.zaehler * nenner);
}


bool Bruch::operator >= (const Bruch& b) const
{
	return(zaehler * b.nenner >= b.zaehler * nenner);
}


/* Global Overloeading */

ostream& operator << (ostream& strm, const Bruch& b) 
{
	b.printOn(strm);
	return(strm);
}


Bruch operator + (int i, const Bruch& b)
{
	return(Bruch(i) + b);
}


Bruch operator - (int i, const Bruch& b)
{
	return(Bruch(i) - b);
}


Bruch operator * (int i, const Bruch& b)
{
	return(Bruch(i) * b);
}


Bruch operator / (int i, const Bruch& b)
{
	return(Bruch(i) / b);
}


bool operator == (int i, const Bruch& b)
{
	return(Bruch(i) == b);
}


bool operator != (int i, const Bruch& b)
{
	return(Bruch(i) != b);
}


bool operator < (int i, const Bruch& b)
{
	return(Bruch(i) < b);
}


bool operator <= (int i, const Bruch& b)
{
	return(Bruch(i) <= b);
}


bool operator > (int i, const Bruch& b)
{
	return(Bruch(i) > b);
}


bool operator >= (int i, const Bruch& b)
{
	return(Bruch(i) >= b);
}
