#include<iostream>
using namespace std;
class test
{
    private:
    int num;
    public:
    test():num(8){}
    void operator++()
    {
        num=num+2;
    }
    void display()
}
