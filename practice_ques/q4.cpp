/*
Renu works for a retail store that sells two types of items: wooden items and electronics.
The store needs a program to calculate the total amount for a customer's purchase based on their choice of item type and the quantity or cost of the item(s).
Create a base class, ItemType, with one virtual function double calculateAmount()
Create a class called wooden that extends ItemType with a number of items and cost as its private attributes.
Obtain the data members and override the virtual function.
amount = number of items * cost
Create a class for electronics that extends ItemType with cost as its private attribute. Obtain the data member and override the virtual function.
amount = 80% of the amount (20% discount)
In the main method, obtain a choice.

If the choice is 1, create an object for the wooden class and call the method.
If the choice is 2, create an object for the electronics class and call the method.

Input format :
The first line of the input consists of the choice.

If the choice is 1, enter the number of items and their cost.
If the choice is 2, enter the cost.

Output format :
The output prints the final amount. Round off the output to two decimal places.

Sample test cases :
Input 1 :
1
5 840
Output 1 :
4200.00
Input 2 :
2
1800
Output 2 :
1440.00
*/
// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;

class Itemtype
{
    public:
    virtual double calculateAmount()
    {
        return 0.0;
    }
};
class wooden : public Itemtype
{
    int n;
    double cost;
    public:
    wooden(int num, double c){n = num; cost = c;}
    double calculateAmount()
    {
        return (n*cost);
    }
};
class Electronics:public Itemtype
{
    double cost;
    public:
    Electronics(double c){cost = c;}
    double calculateAmount()
    {
        return (cost*0.8);
    }
};
int main()
{
    int ch;
    cin>>ch;
    if(ch==1)
    {
        int num;double c;
        cin>>num>>c;
        wooden w(num,c);
        double amount = w.calculateAmount();
        cout<<fixed<<setprecision(2)<<amount<<endl;
    }
    else
    {
        int c;
        cin>>c;
        Electronics e(c);
        double amount = e.calculateAmount();
        cout<<fixed<<setprecision(2)<<amount<<endl;
    }
    return 0;
}