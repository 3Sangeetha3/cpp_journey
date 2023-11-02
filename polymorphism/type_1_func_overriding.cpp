//1. Call Overridden Function From Derived Class
#include<iostream>
using namespace std;
class Parent
{
    public: void fun(){cout<<"Base class"<<endl;}
};
class Child:public Parent
{
    public: void fun()
    {
        cout<<"Child class"<<endl;
        Parent::fun();
    }
};
int main()
{
    Child c;
    c.fun();
    return 0;
}