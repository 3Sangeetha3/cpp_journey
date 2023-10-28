///a program to calculate simple interest using dynamic memory allocation
#include<iostream>
using namespace std;

int main() {
    float *p = new float;
    float *r = new float;
    float *t = new float;
    float *si = new float;

    cout << "Enter principal amount: ";
    cin >> *p;
    cout << "Enter rate of interest: ";
    cin >> *r;
    cout << "Enter time period: ";
    cin >> *t;

    *si = (*p * *r * *t) / 100;

    cout << "The Simple Interest is: " << *si << endl;

    delete p;
    delete r;
    delete t;
    delete si;

    return 0;
}
