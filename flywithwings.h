#ifndef FLYWITHWINGS_H
#define FLYWITHWINGS_H

#include "flybehavior.h"

#include <iostream>

class FlyWithWings : public FlyBehavior
{
public:
    FlyWithWings()    { }

    void fly() override {
        std::cout << "I’m flying!!\n";
    }
};

#endif // FLYWITHWINGS_H
