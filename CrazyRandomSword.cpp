/*
 * File:   CrazyRandomSword.cpp
 * Author: Maria Trinidad Guerra
 */

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) 
{
    srand(time(0));			//seed rand
    int randhp = rand() % 100 + 7;	//random number between 7-100
    hitPoints = randhp;

    int thrd = armor / 3;		//a third of armor
    int randap = rand() % thrd + 2;	//random number between 2-thrd

    double damage = hitPoints - (armor * randap);
    if (damage < 0) 
    {
        return 0;
    }
    return damage;
}

