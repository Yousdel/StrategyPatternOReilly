#ifndef DUCK_H
#define DUCK_H

#include <iostream>

#include "flybehavior.h"
#include "quackbehavior.h"

using namespace std;

class Duck
{
public:
    Duck()    {}
    virtual ~Duck( )  {}

    FlyBehavior *flyBehavior=NULL;
    QuackBehavior *quackBehavior=NULL;

    virtual  void display() =0;
    void performFly() {
        flyBehavior->fly();
    }
    void performQuack() {
        quackBehavior->quack();
    }
    void swim() {
        cout << "All ducks float, even decoys!\n";
    }

    void setFlyBehavior(FlyBehavior *fb) {
        flyBehavior = fb;
    }
    void setQuackBehavior(QuackBehavior *qb) {
        quackBehavior = qb;
    }
};

#endif // DUCK_H
