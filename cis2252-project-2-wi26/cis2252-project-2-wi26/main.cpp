//using cout
#include <iostream>
//includes car class
#include "Car.h"

using namespace std;


int main()
{
    //creates car object
    Car car1(2017, "Ford", "GT");
    //displays car information
    cout << "Car: " << car1.getYear() << " " << car1.getMake() << " " << car1.getModel() << endl;
    cout << "Speed: " << car1.getSpeed() << endl;
    cout << endl;

cout << "Accelerate 5 times" << endl;
for (int i = 0; i < 5; i++)

    car1.accelerate();
    cout << "Speed: " << car1.getSpeed() << endl;
    return 0;
}
//Users/anthonylang/Projects/cis2252-project-2-wi26/cis2252-project-2-wi26/cis2252-project-2-wi26/car.cpp:4:10 Non-portable path to file '"car.h"'; specified path differs in case from file name on disk
//error message even though build is succesffull?
