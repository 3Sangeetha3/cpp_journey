#include<iostream>                        
#include <fstream>                        
using namespace std;
int main() {
    fstream filename;                   
    filename.open("filename", ios::in);         
    if (!filename) {                        
        cout<<"File doesn't exist.";          
    }
    else {
        char x;                     
        while (1) {         
            //filename>>x;//this will not print the spaces in the file
            filename.get(x);  // // Use get() instead of >> to print the output with spaces 
                        
            if(filename.eof())          
                break;              
            cout<<x;                  
        }
    }
    filename.close();                   
    return 0;
}