#include<iostream>
using namespace std;
class stud3;
class stud1;
class stud1
{
    private: int a;
    public: 
    void set_stud1()
    {
        a = 10;
    } 
    friend void stud2(stud1 ob1,stud3 ob3);         ///friend function is accessing the member of class stud1
};
class stud3
{
    private: int b;
    public:
    void set_stud3()
    {
        b = 20;
    } 
    friend void stud2(stud1 ob1,stud3 ob3);             ///friend function is also accesssing the member of class stud2 
};
void stud2(stud1 ob1, stud3 ob3)
{
    int c;
    c = ob1.a+ob3.b;
    cout<<c;
}
int main()
{
    stud1 obj;
    obj.set_stud1();
    stud3 obj3;
    obj3.set_stud3();
    stud2(obj,obj3);                                //friend function has values of both the classes
    return 0;
}