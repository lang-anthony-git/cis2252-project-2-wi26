//using cout
#include <iostream>
//includes car class
#include "Car.h"

using namespace STD;


int main()
{
    //creates car object
    Car car1(2017, "Ford", "GT");
    //displays car information
    cout << "Car: " << car1.getYear() << " " << car1.getMake() << " " << car1.getModel() << endl;
    cout << "Speed: " << car1.getSpeed() << endl;
    cout << endl;
}
