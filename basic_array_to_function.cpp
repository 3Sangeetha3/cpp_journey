#include<iostream>
using namespace std;
void func(int *a);
void foo(int a[4]);
void func(int *a)
{
    for(int i=0;i<5;i++)
    cout<<a[i]<<" ";
}
void foo(int a[4])
{
    for(int i=0;i<5;i++)
    cout<<a[i]<<" ";
}
int main()
{
    int a[5]={1,2,3,4,5};
    func(a);
    cout<<endl;
    foo(a);
    return 0;
}
