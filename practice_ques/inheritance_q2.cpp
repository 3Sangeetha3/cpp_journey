/*
Arun is tasked with implementing a program that simulates a mathematical operation on an input number.
The program uses a class to represent a Parent class and its derived child class.
The Parent class contains a protected member variable num, and a public member function setNum(int n) to set the value of num.
The Child class inherits from the Parent class and implements the member function fun().

Write a program to implement the following logic using inheritance.
Create a class Parent and implement the fun method.
In the method, get the individual digits of the entered number, store them in an array, and find their sum.

For example, in the case of 1234, the individual digits are 4, 3, 2, 1, and the final sum → (4+3)+(4+2)+(4+1)+(3+2)+(3+1)+(2+1) = 30.

Create the main class that inherits the parent class and call the fun method inside the parent function.
Input format :
The input consists of an integer.

Output format :
The output prints the final sum.

Code constraints :
The input integer number will be a positive integer.

The value of num should not exceed 10000.

Sample test cases :
Input 1 :
1234
Output 1 :
30
Input 2 :
4356
Output 2 :
54
*/

#include<iostream>
using namespace std;

class Parent {
protected:
    int num;
public:
    void setNum(int n) {
        num = n;
    }
    int fun() {
        int sum = 0;
        int arr[4];
        for(int i=0; i<4; i++) {
            arr[i] = num%10;
            num /= 10;
        }
        for(int i=0; i<4; i++) {
            for(int j=i+1; j<4; j++) {
                sum += arr[i] + arr[j];
            }
        }
        return sum;
    }
};

class Child : public Parent {
public:
    void parentFun() {
        cout << "The sum is: " << fun() << endl;
    }
};

int main() {
    Child c;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    c.setNum(n);
    c.parentFun();
    return 0;
}