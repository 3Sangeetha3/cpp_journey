#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    try
    {
        if(b!=0)
        {
            cout<<"Result : "<<a/b<<endl;
        }
        else{throw(b);}
    }
    catch(int b)
    {
        cout<<"Exception caught: b = n"<<b<<endl;
    }
    return 0;
}