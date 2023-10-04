///fibonacci series
#include<iostream>
using namespace std;
class Solution {
public:
    int fib(int n) {
        if(n<=1)
        {
            return n;
        }
        else
        {
            return fib(n-1)+fib(n-2);
        }
    }
};
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    Solution sol;
    sol.fib(n);
    cout<<"fibonacci series is : ";
    for (int i=0;i<=n;i++)
    {
    cout<<sol.fib(i)<<" ";
    }
    return 0;
}
