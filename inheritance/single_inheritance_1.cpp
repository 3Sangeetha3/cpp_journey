#include<iostream>
using namespace std;

class A
{
    protected:
        int a;
    public: 
        void Set_A()
        {
            cout<<"Enter the value of A = ";
            cin>>a;
        }
        void display_A()
        {
            cout<<"The value of A = "<<a<<endl;
        }
};
class B : public A
{
    int b,p;
    public:
        void Set_B()
        {
            Set_A();
            cout<<"Enter the value of B = ";
            cin>>b;
        }
        void siaplay_B()
        {
            display_A();
            cout<<"The value of B = "<<b<<endl;
        }
        void cal_product()
        {
            p = a*b;
            cout<<"The product of A and B = "<<a<<" * "<<b<<" = "<<p;
        }
};
int main()
{
    B obj;
    obj.Set_B();
    obj.siaplay_B();
    obj.cal_product();
    return 0;
}