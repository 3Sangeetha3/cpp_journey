#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream marks;
    marks.open("marks.dat",ios::in & ios::out);
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            cin>>a[i][j];
        }
        cout<<endl;
    }

}