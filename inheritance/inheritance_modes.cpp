// C++ Implementation to show that a derived class 
// doesn’t inherit access to private data members. 
// However, it does inherit a full parent object. 
#include<iostream>
using namespace std;
class A { 
public: 
	int x = 10; 

protected: 
	int y = 20; 

private: 
	int z = 30; 
}; 

class B : public A { 
	// x is public 
	// y is protected 
	// z is not accessible from B 
}; 

class C : protected A { 
	// x is protected 
	// y is protected 
	// z is not accessible from C 
}; 

class D : private A // 'private' is default for classes 
{ 
	// x is private 
	// y is private 
	// z is not accessible from D 
};

int main()
{
    B b;
    C c;
    D d;
    cout << b.x << endl;
    // cout << b.y << endl; // error: ‘int A::y’ is protected within this context
    // cout << b.z << endl; // error: ‘int A::z’ is private within this context
    // cout << c.x << endl; // error: ‘int A::x’ is inaccessible within this context
    // cout << c.y << endl; // error: ‘int A::y’ is protected within this context
    // cout << c.z << endl; // error: ‘int A::z’ is private within this context
    // cout << d.x << endl; // error: ‘int A::x’ is inaccessible within this context
    // cout << d.y << endl; // error: ‘int A::y’ is protected within this context
    // cout << d.z << endl; // error: ‘int A::z’ is private within this context
    return 0;
}