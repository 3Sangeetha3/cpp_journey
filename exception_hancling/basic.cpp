#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter the value: ";
    cin>>x;
    cout<<"Before try"<<endl;
    try
    {
        cout<<"Inside try"<<endl;
        if(x<0)
        {
            throw x;
            cout<<"After throw(never executed)"<<endl;
        }
    }
    catch(int x)
    {
        cout<<"Exception caught"<<endl;
    }
    cout<<"After caught (will be executed)"<<endl;
    return 0;
}