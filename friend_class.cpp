#include <iostream>
using namespace std;
class A
{
    int a, b;
    public:
        A(int x, int y)
        {
            a = x;
            b = y;
        }
        friend class B;
};
class B
{
    public:
        void showA(A& z)
        {
            cout << "A::a=" << z.a << endl;
            cout << "A::b=" << z.b << endl;
        }
        void add(A r)
        {
            int c;
            c = r.a+r.b;
            cout<<"sum = "<<c<<endl;
        }
};
int main()
{
    A a(10, 20);
    B b;
    b.showA(a);
    b.add(a);
    return 0;
}