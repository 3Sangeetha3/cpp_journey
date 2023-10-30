///A special case of hybrid inheritance: Multipath inheritance: 

/*
A derived class with two base classes and these two base classes have one common base class is called multipath inheritance. 
Ambiguity can arise in this type of inheritance. 

There are 2 Ways to Avoid this Ambiguity: 
1) Avoiding ambiguity using the scope resolution operator: Using the scope resolution operator we can manually specify the path from which data member a will be accessed
*/

#include<iostream>
using namespace std;

class ClassA
{
    public: 
    int a;
};

class ClassB : public ClassA
{
    public: 
    int b;
};

class ClassC : public ClassA
{
    public: 
    int c;
};

class ClassD : public ClassB, public ClassC
{
    public: 
    int d;
};

int main()
{
    ClassD obj;
    // obj.a = 10;                  // Statement 1, Error 
    // obj.a = 100;                 // Statement 2, Error
    
    obj.ClassB::a = 10;             //statement 3 
    obj.ClassC::a = 100;            //statement 4

    //still in classD there are two copies of classA through classB and classC
    
    obj.b = 20; 
    obj.c = 30; 
    obj.d = 40; 
  
    cout << " a from ClassB  : " << obj.ClassB::a; 
    cout << "\n a from ClassC  : " << obj.ClassC::a; 
  
    cout << "\n b : " << obj.b; 
    cout << "\n c : " << obj.c; 
    cout << "\n d : " << obj.d << '\n'; 
    return 0;
}

