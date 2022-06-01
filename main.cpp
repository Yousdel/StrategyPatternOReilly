#include <QCoreApplication>

#include <iostream>

#include "duck.h"
#include "mallardduck.h"
#include "modelduck.h"
#include "flyrocketpowered.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MallardDuck md;
    Duck *duck = &md;
    duck->performQuack();
    duck->performFly();
    duck=NULL;

    Duck *model = new ModelDuck();
    model->performFly();
    model->setFlyBehavior(new FlyRocketPowered());
    model->performFly();
    delete model;

    char *s = nullptr;
    std::cin.getline(s,1); //esperar un enter
    s=NULL;

    return a.exec();
}
