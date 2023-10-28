#include<iostream>
#include<string>
using namespace std;
class Person
{
    int id;
    char name[100];
    public: 
        void set_p(int,char[]);
        void display_p();
};
void Person::set_p(int id, char n[])
{
    // id = id;
    // strcpy(name,n);
    this->id=id;
    strcpy(this->name,n);
}
void Person :: display_p()
{
    cout<<"id = "<<id<<"\t"<<"name = "<<name<<endl;
}

class Student : private Person
{
    int fee;
    char course[100];
    public: 
        void set_s(int,char[],int, char[]);
        void display_s();
};
void Student :: set_s(int id, char n[], int f, char c[])
{
    set_p(id,n);
    fee = f;
    strcpy(course,c);
}
void Student :: display_s()
{
    display_p();
    cout<<"fee = "<<fee<<"\t"<<"course = "<<course<<endl;
}
int main()
{
    Student s;
    char name[] = "John Doe";
    char course[] = "Computer Science";
    s.set_s(1, name, 50000, course);
    s.display_s();
    return 0;
}
