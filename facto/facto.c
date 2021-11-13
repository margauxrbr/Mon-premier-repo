#include "facto.h"

unsigned long facto(unsigned long n)
{
    unsigned long res = 1;
    for (unsigned long compteur =1; compteur <= n ; compteur ++)
    {
        res = res * compteur;
    }
    return res;
}

