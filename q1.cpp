/*
Help Aashiq solve the following problem: Create a program that performs string operations using a custom class called MyString.
The program should read two strings and a number from the user, and then perform concatenation and repetition operations on those 
strings using overloaded operators. Finally, it should display the results.

Input format :
The input consists of two strings: str1 and str2 in separate lines.
The last line of the input consists of the number of repetitions, n.

Output format :
The output prints the following in each line:
a) The concatenated string of first and second.
b) The first string that is repeated n times.
c) The second string that is repeated n times.

Code constraints :
The maximum length of each input string is 100 characters.
1 <= n <= 10

Sample test cases :
Input 1 :
Hello
helllooo
5
Output 1 :
Hellohelllooo
HelloHelloHelloHelloHello
helllooohelllooohelllooohelllooohelllooo
Input 2 :
Today
Today
5
Output 2 :
TodayToday
TodayTodayTodayTodayToday
TodayTodayTodayTodayToday

*/
#include <iostream>
#include <string>
using namespace std;
class MyString {
    string str;
public:
    MyString() : str("") {}
    MyString(const std::string& s) : str(s) {}
    MyString operator+(const MyString& s) {
        return MyString(str + s.str);
    }
    MyString operator*(int n) {
        std::string result;
        for (int i = 0; i < n; ++i) {
            result += str;
        }
        return MyString(result);
    }
    void print() const {
        std::cout << str << std::endl;
    }
};

int main() {
    std::string str1, str2;
    int n;
    std::getline(std::cin, str1);
    std::getline(std::cin, str2);
    std::cin >> n;
    MyString myStr1(str1), myStr2(str2);
    MyString concat = myStr1 + myStr2;
    concat.print();
    MyString repeat1 = myStr1 * n;
    repeat1.print();
    MyString repeat2 = myStr2 * n;
    repeat2.print();
    return 0;
}
