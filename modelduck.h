#ifndef MODELDUCK_H
#define MODELDUCK_H

#include "duck.h"
#include "flynoway.h"
#include "quack.h"

class ModelDuck: public Duck
{
public:
    ModelDuck()    {
        flyBehavior = new FlyNoWay();
        quackBehavior = new Quack();
    }
    void display() override{
        std::cout << "I’m a model duck\n";
    }
};

#endif // MODELDUCK_H
