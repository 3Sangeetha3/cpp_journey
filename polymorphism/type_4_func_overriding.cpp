//4. Access of Overridden Function
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
    Child ob1,ob2;
    ob1.fun();
    ob2.Parent::fun();           
    return 0;
}