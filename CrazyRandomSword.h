//Author: Maria Trinidad Guerra

#include <string>
#include "Weapon.h"
#include <stdlib.h>
#include <time.h>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a CRAZY RANDOM SWORD ( hitpoints = random integer number 
between 7 and 100. Ignores a random amount of integer armor points, ranging from to 2 
to a third of the armor the weapon hits.)
 */
class  CrazyRandomSword : public Weapon {
public:
     
     CrazyRandomSword() : Weapon("Crazy random sword", 50.0) //Calls Weapon(name, hitpoints) constructor with values Common Sword and 50.0
    {
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */

