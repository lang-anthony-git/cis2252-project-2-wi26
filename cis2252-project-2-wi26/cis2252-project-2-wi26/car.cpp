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
//will return year make model and speed
int Car::getYear()
return year
const
string Car::getMake()
return make
const
string Car::getModel()
return model
const
int Car::getSpeed()
return speed
const
// braking and acceleration for car
void Car::accelerate()
if (speed + 5 > 150)
else
void Car::accelerate()
if (speed - 5 < 0)
else 
