//2. Call Overridden Function Using Pointer
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
    }
};
int main()
{
    Child c;
    c.fun();
    Parent *ptr = &c;       // pointer of Parent type that points to derived
    ptr->fun();             // call function of Base class using ptr
    return 0;
}