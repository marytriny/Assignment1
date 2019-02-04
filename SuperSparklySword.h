/*
 * File:  SuperSparklySword.h
 * Author: Maria Trinidad Guerra
 */

#include <string>
#include "Weapon.h"

#ifndef SUPERSPARKLYSWORD_H
#define SUPERSPARKLYSWORD_H


/**
 * Defines the behavior of a SuperSparklySword (hitpoint = 1000, Ignores 50% of the 
armor points.)
 */
class SuperSparklySword : public Weapon {
public:

    SuperSparklySword() : Weapon("Super Sparkly Sword", 1000.0) //Calls Weapon(name, hitpoints) constructor with values SuperSparklySword and 1000.0
    {
    }

    virtual ~SuperSparklySword() {};

    virtual double hit(double armor);

};

#endif /* SUPERSPARKLYSWORD_H */

