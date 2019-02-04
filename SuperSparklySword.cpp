/*
 * File:   SuperSparklySword.cpp
 * Author: Maria Trinidad Guerra
 */

#include "SuperSparklySword.h"

double SuperSparklySword::hit(double armor)
{
    double damage = hitPoints - (armor / 2);		//ignores half of armor points 
points
    if (damage < 0)
    {
        return 0;
    }
    return damage;
}

