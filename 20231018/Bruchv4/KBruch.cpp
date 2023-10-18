#include <iostream>
#include <algorithm>
#include "KBruch.h"

using namespace std;


KBruch::KBruch(int z, int n) : Bruch(z,n)
{
	kuerzbar = (ggt() > 1);
}


KBruch::KBruch(const Bruch& b) : Bruch(b)
{
	kuerzbar = (ggt() > 1);
}


KBruch::~KBruch()
{
	/* empty */
}


unsigned KBruch::ggt() const
{
	if (zaehler == 0)
	{
		return(nenner);
	}

	unsigned teiler = min(abs(zaehler), nenner);
	while ((zaehler % teiler != 0) || (nenner % teiler != 0))
	{
		teiler--;
	}
	return(teiler);
}


void KBruch::kuerzen()
{
	if (kuerzbar)
	{
		int teiler = ggt();

		zaehler /= teiler;
		nenner /= teiler;

		kuerzbar = false;
	}
}


bool KBruch::istKuerzbar(void) const
{
	return(kuerzbar);
}
