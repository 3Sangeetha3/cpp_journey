//program to allocate/deallocate array of memory locations

#include<iostream>
using namespace std;

int main()
{
    int *a,n;
    cout<<"Enter size of array: ";
    cin>>n;
    a = new int[n];
    if(a==NULL)
    {
        cout<<"problem in memory allocation"<<endl;
        exit(1);
    }
    else
    {
        cout<<"Dynamic memory allocation successful."<<endl;
        cout<<"Enter all the elements of the array : ";
        for(int i=0;i<n;i++)
        cin>>*(a+i);
        cout<<"Elements of the array are : ";
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        delete[] a;
    }
    return 0;
}
