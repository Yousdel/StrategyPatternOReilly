#ifndef MUTEQUACK_H
#define MUTEQUACK_H

#include <iostream>
#include "quackbehavior.h"

class MuteQuack : public QuackBehavior
{
public:
    MuteQuack()    {}
    virtual ~MuteQuack(){}
    void quack() override{
        std::cout << "<< Silence >>\n";
    }
};

#endif // MUTEQUACK_H
