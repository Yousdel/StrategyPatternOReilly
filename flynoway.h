#ifndef FLYNOWAY_H
#define FLYNOWAY_H

#include <iostream>
#include "flybehavior.h"

class FlyNoWay : public FlyBehavior
{
public:
    FlyNoWay()    {   }
    void fly()  override{
        std::cout<< "I can’t fly\n";
    }
};

#endif // FLYNOWAY_H
