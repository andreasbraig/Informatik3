#pragma once

#include "Bruch.h"


class KBruch :
    public Bruch
{
protected:
    bool kuerzbar;
 
    unsigned ggt() const;
 
public:
    KBruch(int = 0, int = 1);
    KBruch(const Bruch&);
    ~KBruch();

    void kuerzen();
    bool istKuerzbar() const;
};

