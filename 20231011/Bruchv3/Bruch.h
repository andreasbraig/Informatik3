#pragma once

#include <iostream>


class Bruch
{
	/* kein Zugriff von aussen */
private:
	int zaehler;
	int nenner;

	/* oeffentliche Schnittstelle */
public:
	Bruch(int = 0);
	Bruch(int, int);
	~Bruch();

	/* Methoden */
	void printOn(std::ostream& = std::cout) const;

	/* Operatoren */
	const Bruch& operator = (const Bruch&);
	Bruch operator + (const Bruch&) const;
	Bruch operator - (const Bruch&) const;
	Bruch operator * (const Bruch&) const;
	Bruch operator / (const Bruch&) const;
	bool operator == (const Bruch&) const;
	bool operator != (const Bruch&) const;
	bool operator < (const Bruch&) const;
	bool operator <= (const Bruch&) const;
	bool operator > (const Bruch&) const;
	bool operator >= (const Bruch&) const;
};


/* Global Overloading */
std::ostream& operator << (std::ostream&, const Bruch&);
Bruch operator + (int, const Bruch&);
Bruch operator - (int, const Bruch&);
Bruch operator * (int, const Bruch&);
Bruch operator / (int, const Bruch&);
bool operator == (int, const Bruch&);
bool operator != (int, const Bruch&);
bool operator < (int, const Bruch&);
bool operator <= (int, const Bruch&);
bool operator > (int, const Bruch&);
bool operator >= (int, const Bruch&);

