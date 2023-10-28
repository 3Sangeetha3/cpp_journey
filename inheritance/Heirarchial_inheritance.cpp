//********** Heirarchial inheritance ***********

/*
In this type of inheritance, more than one subclass is inherited from a single base class.
i.e. more than one derived class is created from a single base class.
*/

#include<iostream>
using namespace std;

class A                 // base class 
{
    public : 
        A()
        {
            cout<<"This is class A"<<endl;
        }
};
class B : public A          //derived class 1
{
    public:
    B()
    {
        cout<<"This is class B"<<endl;
    }
};
class C : public A          //derived class 2
{
    public:
    C()
    {
        cout<<"This is class C"<<endl;
    }
};
int main()
{
    // Creating object of sub class will 
    // invoke the constructor of base class. 
    C obj1;
    B obj2;
    return 0;
}