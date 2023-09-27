///constructors
#include<iostream>
using namespace std;

///A constructor which has no argument is known as default constructor. 
///It is invoked at the time of creating object.

class Employee
{
    public:
    Employee()
    {
        cout<<"Default constructor is invoked."<<endl;
    }
};
int main()
{
    Employee e1;
  return 0;
}
