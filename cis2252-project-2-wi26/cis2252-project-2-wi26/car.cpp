//lets me use cout
#include <iostream>
//car class is now included (duh)
#include "Car.h"
//constructor, sets year make + model
//sets speed to start at 0
Car::Car(int y, string mk, string mdl)
{
    year = y;
    make = mk;
    model = mdl;
    speed = 0;
}
