///operator overloading to change the sign of the data members.
#include<iostream>
using namespace std;
class abc
{
    private: 
    int x,y,z;
    public:
    abc(int a, int b, int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void display()
    {
        cout<<"x = "<<x<<" y= "<<y<<" z = "<<z;
    }
    void operator -()//operator function
    {
        x=-x;
        y=-y;
        z=-z;
    }
};
int main()
{
    abc s(1,-2,3);
    cout<<"s: ";
    s.display();
    cout<<endl;
    -s;
    cout<<"s : ";
    s.display();
    return 0;
}
