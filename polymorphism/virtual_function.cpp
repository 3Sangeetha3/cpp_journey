#include<iostream>
using namespace std;
class A{
    public: virtual void  display(){cout<<"Base class"<<endl;}
};
class B:public A{
    public: void  display(){cout<<"Child class"<<endl;}
};
int main()
{
    B b,ob;
    A *ptr = &ob;
    b.display();
    b.A::display();
    ptr->display();
}