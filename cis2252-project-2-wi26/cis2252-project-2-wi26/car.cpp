//lets me use cout
#include <iostream>
//car class is now included (duh)
#include "car.h"
//constructor, sets year make + model
//sets speed to start at 0
Car::Car(int y, string mk, string mdl)
{
    year = y;
    make = mk;
    model = mdl;
    speed = 0;
}
//returns year, make, and model, speed
int Car::getYear() const
{
    return year;
}

string Car::getMake() const
{
    return make;
}

string Car::getModel() const
{
    return model;
}

int Car::getSpeed() const
{
    return speed;
}

//adds 5 to speed unless over 150
void Car::accelerate()
{
    if (speed + 5 > 150)
    {
        cout << "Warning: speed cannot go above 150." << endl;
    }
    else
    {
        speed = speed + 5;
    }
}
//subtracts 5 from speed unless it goes below 0
void Car::brake()
{
    if (speed - 5 < 0)
    {
        cout << "Warning: speed cannot go below 0." << endl;
    }
    else
    {
        speed = speed - 5;
    }
}
