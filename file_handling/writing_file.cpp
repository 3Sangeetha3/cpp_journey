#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream filename;
    filename.open("filename",ios::out);
    if(!filename)
    {
        cout<<"file not created";
    }    
    else{
        cout<<"\n file is successfully created ";
        filename<<"hello writing in the file";
    }
    cout<<endl;
    filename.close();
    cout<<"Done";
}