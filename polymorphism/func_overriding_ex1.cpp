//wap to to calculate the area of shapes.
#include<iostream>
using namespace std;

class Shape
{
    protected: int length, width;
    public: Shape(int l, int w){length = l; width = w;}
            int get_Area()
            {
                cout<<"This is call to parent class."<<endl;
                return 1;
            }
};
class Square : public Shape
{
    public: Square(int l=0,int w=0):Shape(l,w){}
            int get_Area()
            {
                cout<<"Square area : "<<length*width<<endl;
                return (length*width);
            }
};
class Rectangle: public Shape
{
    public: Rectangle(int l=0,int w=0):Shape(l,w){}
            int get_Area()
            {
                cout<<"Rectangle area : "<<length*width<<endl;
                return (length*width);
            }
};
int main()
{
    Shape *s;
    Square ob1(5,5);
    s=&ob1;
    s->get_Area();
    Rectangle ob2(4,2);
    s = &ob2;
    s->get_Area();
}

/*
->We store the address of each child’s class Rectangle and Square object in s and
->Then we call the get_Area() function on it,
->Ideally, it should have called the respective get_Area() functions of the child classes but
->Instead, it calls the get_Area() defined in the base class.
->This happens due to static linkage which means the call to get_Area() is getting set only once by the compiler which is in the base class.


=> i cannot print the get_Area output i.e; 25 & 8 without using virtual function in the pointer concept
=> If you want to calculate the area of shapes without using a virtual function, you can call the get_Area() function directly on the objects instead of through a pointer to the base class.
    i.e;ob1.get_Area();, ob2.get_Area();
*/