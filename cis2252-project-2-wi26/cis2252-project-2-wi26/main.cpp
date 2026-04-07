//using cout
#include <iostream>
//includes car class
#include "car.h"

using namespace std;


int main()
{
    //creates car object
    Car car1(2017, "Ford", "GT");
    //displays car information
    cout << "Car: " << car1.getYear() << " " << car1.getMake() << " " << car1.getModel() << endl;
    cout << "Speed: " << car1.getSpeed() << endl;
    cout << endl;
    //accelerates 5 times
    cout << "Accelerate 5 times" << endl;
    for (int i = 0; i < 5; i++)
    {
        car1.accelerate();
        cout << "Speed: " << car1.getSpeed() << endl;
    }
    cout << endl;
    //Brake 5 times
    cout << "Brake 5 times" << endl;
      for (int i = 0; i < 5; i++)
      {
          car1.brake();
          cout << "Speed: " << car1.getSpeed() << endl;
      }

      cout << endl;
//test brakes at 0
      cout << "Test brake at 0" << endl;
      car1.brake();
      cout << "Speed: " << car1.getSpeed() << endl;

      cout << endl;
//test acceleration past 150
      cout << "Test accelerate past 150" << endl;
      for (int i = 0; i < 31; i++)
      {
          car1.accelerate();
          cout << "Speed: " << car1.getSpeed() << endl;
      }

      return 0;
  }
