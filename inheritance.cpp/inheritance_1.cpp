//Inheritance using private access specifier

// Example: define member function without argument within the class 


///important note: 
/*
When a base class is privately inherited by the derived class, 
public members of the base class becomes the private members of the derived class and therefore, 
the public members of the base class can only be accessed by the member functions of the derived class.
They are inaccessible to the objects of the derived class.
*/

#include <iostream> 
using namespace std; 

class Person { 
	int id; 
	char name[100]; 

public: 
	void set_p() 
	{ 
		cout << "Enter the Id:"; 
		cin >> id; 
		cout << "Enter the Name:"; 
		cin >> name; 
	} 

	void display_p() 
	{ 
		cout << endl <<"Id: "<< id << "\nName: " << name <<endl; 
	} 
}; 

class Student : private Person { 
	char course[50]; 
	int fee; 

public: 
	void set_s() 
	{ 
		set_p(); 
		cout << "Enter the Course Name:"; 
		cin >> course; 
		cout << "Enter the Course Fee:"; 
		cin >> fee; 
	} 

	void display_s() 
	{ 
		display_p(); 
		cout <<"Course: "<< course << "\nFee: " << fee << endl; 
	} 
}; 

int main() 
{ 
	Student s; 
	s.set_s(); 
	s.display_s(); 
    //s.display_p();              //this will give an error beacuse it is private
	return 0; 
}
