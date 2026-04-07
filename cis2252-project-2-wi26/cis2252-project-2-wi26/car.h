//guard
#ifndef CAR_H
#define CAR_H
//uses string data type
#include <string>
using namespace std;
//creates car class
class Car
{
private:
//data for actual car
    int year;
    string make;
    string model;
    int speed;
public:
//constructor
    Car(int y, string mk, string mdl);
//accesors
    int getYear() const;
    string getMake() const;
    string getModel() const;
    int getSpeed() const;
//for speed change
    void accelerate();
    void brake();
};
//end of guard
#endif
