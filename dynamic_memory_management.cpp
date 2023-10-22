#include<iostream>
using namespace std;

class Student
{
    int age;
    public: Student():age(12){}     // constructor initializes age to 12
    void getage()
    {
        cout<<"Age is: "<<age<<endl;
    }
};
int main()
{
    Student *s = new Student();     // dynamically declare Student object
    s->getage();                    // call getAge() function
    delete s;                       // ptr memory is released
    return 0;
}