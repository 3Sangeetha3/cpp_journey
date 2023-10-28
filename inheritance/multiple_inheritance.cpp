//********************   Multiple inheritance   *********************


//Multiple Inheritance is a feature of C++ where a class can inherit from more than one class.
//i.e one subclass is inherited from more than one base class.
#include<iostream>
using namespace std;

class Vehicle                           //Base class 1
{
    public:
        Vehicle()
        {
            cout << "This is a Vehicle" << endl;
        }
};
class FourWheeler                          //Base class 2 
{
    public:
        FourWheeler()
        {
            cout << "This is a 4 wheeler Vehicle" << endl;
        }
};
class Car: public Vehicle, public FourWheeler           //Derived class which can access both the classes
{
    public:
        Car()
        {
            cout << "This is a Car" << endl;
        }
};
int main()
{
    Car obj;
    return 0;
}