///basics of inheritance 

#include<iostream>
using namespace std;

class Dad                               //Base class
{
    protected:
        int amount;
    public:
        void input()
        {
            amount = 100000;
        } 
};
class Son : public Dad                  //derived class
{
    int money;
    public:
        void input()
        {
            money = 50000;
            Dad::input();               // Call the input function of the Dad class
        }
        void display()
        {
            cout<<"Amount of Dad: "<<amount<<endl;
            cout<<"Amount of Son: "<<money<<endl;
        }
};
int main()
{
    Son s;                             //we only make the object of derived class
    s.input();
    s.display();
    return 0;
}
