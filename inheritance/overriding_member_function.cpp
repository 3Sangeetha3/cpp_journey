/*
Overriding member function:
In C++, when a Derived class inherits a Member function from its Base class, it can redefine the behavior of that function in the Derived class. 
This process of redefining a Base class Member Function in a Derived class is called "Overriding" and the redefined function is referred to as an "Overridden Member Function".

*/

#include<iostream>
using namespace std;

class Shape
{
    public: 
    virtual void draw()
    {
        cout<<"Drawing Shape"<<endl;
    }
};
class Circle:public Shape
{
    public:
    void draw()
    {
        cout<<"Drawing Circle"<<endl;
    }
};
class Rectangle:public Shape
{
    public:
    void draw()
    {
        cout<<"Drawing Rectangle"<<endl;
    }
};
int main()
{
    Shape *s = new Circle();
    s->draw();
    s = new Rectangle();
    s->draw();
    return 0;
}
/*
Rules for Overriding Member Functions:

->The Overridden Function in the derived class must have the same name and arguments as the base class function.
->The Overridden Function must have the same return type as the base class function or a covariant return type.
->The access level of the Overridden Function in the derived class cannot be more restrictive than the access level of the base class function.
    example:

    class Base {
    public:
        virtual void myFunction() {
            // Base class implementation
        }
    };

    class Derived : public Base {
    private:  // This will cause a compile error
        void myFunction() override {
            // Derived class implementation
        }
    };

->The Virtual keyword must be used in the base class function declaration.
->The function in the base class must be declared with the same access level or higher than the derived class.
*/