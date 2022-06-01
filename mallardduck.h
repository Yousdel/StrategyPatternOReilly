#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include <iostream>
#include "duck.h"
#include "quack.h"
#include "flywithwings.h"

class MallardDuck : public Duck
{
public:
    MallardDuck()
    {
         quackBehavior = new Quack();
         flyBehavior = new FlyWithWings();
    }
    ~MallardDuck();
    void display() override {
        std::cout << "I’m a real Mallard duck\n";
    }
};

#endif // MALLARDDUCK_H
