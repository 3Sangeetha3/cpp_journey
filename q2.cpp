/*
You are developing a program to analyze electrical circuits. 
You need to calculate the impedance of two components in a circuit. The impedance is represented by complex numbers. 
Implement the Arithmetic class to perform addition and subtraction operations on the impedance values. 

Create a class Arithmetic for operator overloading to perform addition and subtraction. 
Create a binary operator overloading functions to perform arithmetic operations on the given set of complex numbers. 

Input format :
The first line consists of space-separated float values representing the real and imaginary parts of the first complex number.
The second line consists of space-separated float values representing the real and imaginary parts of the second complex number.

Output format :
The first line of output displays the addition of the complex numbers.
The second line of output display the subtraction of the complex numbers.

Code constraints :
-105 < real and imaginary values < 105

Sample test cases :
Input 1 :
4.5 7.8
1.2 3.1
Output 1 :
5.7 + 10.9i
3.3 + 4.7i
Input 2 :
-4 -8.5
5 -5.5
Output 2 :
1 - 14i
-9 - 3i
*/
// You are using GCC

#include<iostream>
using namespace std;
class Arithemetic
{
    private:
    float real,img;
    public:
    Arithemetic(float r=0,float i=0):real(r),img(i){}
    Arithemetic operator + (Arithemetic const &obj)
    {
        return Arithemetic(real+obj.real, img+obj.img);
    }
    Arithemetic operator -(Arithemetic const &obj)
    {
        return Arithemetic(real-obj.real, img-obj.img);
    }
    void print()
    {
        if(img<0)
        cout<<real<<" - "<<abs(img)<<"i"<<endl;
        else
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
int main()
{
    float real1,img1,real2,img2;
    cin>>real1>>img1;
    cin>>real2>>img2;
    Arithemetic c1(real1,img1),c2(real2,img2);
    Arithemetic c3 = c1+c2;
    Arithemetic c4 = c1-c2;
    c3.print();
    c4.print();
    return 0;
}