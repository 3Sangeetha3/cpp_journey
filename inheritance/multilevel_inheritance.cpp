//*********************  Mutlilevel inheritance  ******************

//In this type of inheritance, a derived class is created from another derived class.

#include<iostream>
using namespace std;

class A
{
    public:
        A()
        {
            cout << "This is class A" << endl;
        }
};
class B : public A
{
    public:
        B()
        {
            cout << "This is class B "<< endl;
        }
};
class C : public B
{
    public:
        C()
        {
            cout << "This is class C" << endl;
        }
};
int main()
{
    C obj;
    return 0;
}