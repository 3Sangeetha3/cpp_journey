///wap to reverse a number using class object method.
#include<iostream>
using namespace std;
class NumberReverse
{
    public:
        int num,rev=0;
        int reverse()
        {
            while(num!=0)
            {
                rev = (rev * 10) + (num % 10);
                num /= 10;
            }
        }
};
int main()
{
    NumberReverse ob;
    cin>>ob.num;
    ob.reverse();
    cout<<ob.rev;
    return 0;
}
