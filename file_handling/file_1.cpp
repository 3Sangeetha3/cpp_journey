#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char s[30];
    ofstream of("result");///created an object "of" of ofstream class, "result" is the name of the file    of<<"hello";
    of.close();
    ifstream inf("result");///created an object "inf" of ifstream class, "result" is the name of the file 
    inf>>s;
    cout<<s;
    inf.close();
    return 0;
}