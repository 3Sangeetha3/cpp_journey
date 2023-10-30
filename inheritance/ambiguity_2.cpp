// 2) Avoiding ambiguity using the virtual base class:

#include<iostream>
using namespace std;

class ClassA
{
    public: 
    int a;
};

class ClassB : virtual public ClassA
{
    public: 
    int b;
};

class ClassC : virtual public ClassA
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
    obj.a = 10;    //statement 3              
    obj.a = 100;   //statement 4             
    
    //Class-D has only one copy of ClassA, therefore, 
    //statement 4 will overwrite the value of a, given in statement 3
    
    obj.b = 20; 
    obj.c = 30; 
    obj.d = 40; 
    
    cout << "\n a : " << obj.a; 
    cout << "\n b : " << obj.b; 
    cout << "\n c : " << obj.c; 
    cout << "\n d : " << obj.d << '\n'; 
    return 0;
}