/*
Gowtham is required to implement a basic class hierarchy for a program that deals with numerical data. The hierarchy consists of a base class Demo and a derived class, Derived.



Implement the Demo class with the following specifications:

Private members: num1 and num2 of type int
Public constructor: Accepts two integers, n1 and n2, and initializes num1 with n1 and num2 with n2.
Public member functions:
int getNum1() const: Returns the value of num1.

int getNum2() const: Returns the value of num2.

virtual void display(): Prints the values of num1 and num2.



Implement the Derived class, which is derived from the Demo class, with the following specifications:

Public constructor: Accepts two integers, n1 and n2, and passes them to the base class constructor.
Public member function:
void display(): Overrides the display() function in the base class and prints the values of num1 and num2 with a prefix "Derived - ".

You need to implement the classes and demonstrate their functionality in the main() function.
The main() function should take two integer inputs from the user and create an object of the Derived class using these input values.
It should then display the values using the overridden display() method and delete the dynamically allocated object using a base class pointer to avoid any memory leaks.

Note: The program should display appropriate messages indicating the constructor and destructor calls for each class.

Input format :
The input consists of the numbers to be assigned to n1 and n2, respectively, separated by a space.

Output format :
Messages indicating the constructor and destructor calls for each class.
The derived class-specific display output

Code constraints :
n1, n2 > 0

Sample test cases :
Input 1 :
10 20
Output 1 :
Inside Demo Constructor
Inside Derived Constructor
Derived - Number 1: 10
Derived - Number 2: 20
Inside Derived Destructor
Inside Demo Destructor
*/
// You are using GCC
#include<iostream>
using namespace std;
class Demo
{
    int num1, num2;
    public:Demo(int n1, int n2)
    {
        cout<<"Inside Demo Constructor"<<endl;
        num1=n1;num2=n2;
    }
    int getNum1(){return num1;}
    int getNum2(){return num2;}
    virtual void display()
    {
        cout<<num1<<endl;
        cout<<num2<<endl;
    }
    virtual ~Demo()
    {
        cout<<"Inside Demo Destructor"<<endl;
    }
};
class Derived:public Demo
{
    public:
    Derived(int n1, int n2):Demo(n1,n2)
    {   
        cout<<"Inside Derived constructor"<<endl;
    }
    void display()
    {
        cout<<"Derived - Number 1: "<<getNum1()<<endl;
        cout<<"Derived - Number 2: "<<getNum2()<<endl;
    }
    virtual ~Derived()
    {
        cout<<"Inside Derived Destructor"<<endl;
    }
};
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    Demo *ptr = new Derived(n1,n2);
    ptr->display();
    delete ptr;
    return 0;
}