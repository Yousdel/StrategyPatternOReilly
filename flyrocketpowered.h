#ifndef FLYROCKETPOWERED_H
#define FLYROCKETPOWERED_H

#include "flybehavior.h"

class FlyRocketPowered: public FlyBehavior
{
public:
    FlyRocketPowered()    {    }

    void fly() override{
        std::cout << "I’m fl ying with a rocket!\n";
    }

};

#endif // FLYROCKETPOWERED_H
