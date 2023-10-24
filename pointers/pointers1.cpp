#include<iostream>
using namespace std;
class MyClass
{
    private: int num;
    public: void set_num(int val){num = val;}
    void show_num();
};
void MyClass :: show_num()
{
    cout<<"The number is "<<num<<endl;

}
int main()
{
    MyClass *p;
    int val;
    cout<<"Enter the value of num : ";
    cin>>val;
    p->set_num(val);
    p->show_num();
    return 0;
}