// C++ program to demonstrate implementation of Inheritance 
#include<iostream>
using namespace std; 

// Base class 
class Parent { 
public: 
	int id_p; 
}; 

// Sub class/derived class/child class inheriting from Base Class(Parent) 
class Child : public Parent { 
public: 
	int id_c; 
}; 

// main function 
int main() 
{ 
	Child obj1; 

	// An object of class child has all data members 
	// and member functions of class parent 
	obj1.id_c = 7; 
	obj1.id_p = 91; 
	cout << "Child id is: " << obj1.id_c << '\n'; 
	cout << "Parent id is: " << obj1.id_p << '\n'; 

	return 0; 
}
/*
In the above program, the ‘Child’ class is publicly inherited from the ‘Parent’ class 
so the public data members of the class ‘Parent’ will also be inherited by the class ‘Child’.

Modes of Inheritance: There are 3 modes of inheritance.

Public Mode: If we derive a subclass from a public base class. Then the public member of the base class will become public in the derived class 
and protected members of the base class will become protected in the derived class.

Protected Mode: If we derive a subclass from a Protected base class.
Then both public members and protected members of the base class will become protected in the derived class.

Private Mode: If we derive a subclass from a Private base class. Then both public members and protected members of the base class will become Private in the derived class.
*/