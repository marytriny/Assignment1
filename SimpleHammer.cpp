//Author: MAria Trinidad Guerra

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
    if(armor < 30)
        double damage = hitPoints;
    if (damage < 0) {
        return 0;
    }
    return damage;
}

