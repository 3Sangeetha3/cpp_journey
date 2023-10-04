#include<iostream>
using namespace std;

class CheckPalindrome {
public:
    bool isPalindrome(int n) {
        long long int reversed = 0;
        int original = n;
        while (n > 0) {
            int digit = n % 10;
            reversed = reversed * 10 + digit;
            n /= 10;
        }
        return original == reversed;
    }
};

int main() {
    CheckPalindrome cp;
    int num; 
    cout<<"Entere the number: ";
    cin>>num;
    if (cp.isPalindrome(num))
        cout << num << " is a palindrome number." << endl;
    else
        cout << num << " is not a palindrome number." << endl;
    return 0;
}
