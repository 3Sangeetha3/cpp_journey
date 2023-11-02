/*
Akshitha is tasked with developing a program to determine the day of the week based on a given integer input representing a day number (1 to 7).
In this scenario, each integer from 1 to 7 corresponds to a specific day of the week, as follows:

1: Sunday
2: Monday
3: Tuesday
4: Wednesday
5: Thursday
6: Friday
7: Saturday
The program should take an integer input from the user representing the day number and output the corresponding day of the week.
If the input is not within the range of 1 to 7, the program should print "Invalid."

You need to create a class named Main that handles this functionality.
The constructor of the class Main takes an integer argument representing the day number.
The class should then determine the day of the week based on the input and print the result to the console.
You should also ensure that the class Main has a virtual destructor to allow for proper cleanup when deleting objects through a base-class pointer.

Input format :
The input is a single integer d, representing the day number.

Output format :
The output displays a string representing the corresponding day of the week. If the input d is within the range of 1 to 7, the program should output the day of the week.

If the input d is outside this range, the program should output "Invalid".

Code constraints :
1 <= d <= 7

Sample test cases :
Input 1 :
7
Output 1 :
Saturday
Input 2 :
0
Output 2 :
Invalid
Input 3 :
9
Output 3 :
Invalid
*/

#include <iostream>
#include <string>
using namespace std;
class Main {
    int dayNumber;
public:
    Main(int dayNumber) : dayNumber(dayNumber) {}

    void determineDayOfWeek() {
        string daysOfWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

        if (dayNumber >= 1 && dayNumber <= 7) {
            cout << daysOfWeek[dayNumber - 1] << std::endl;
        } else {
            cout << "Invalid" << endl;
        }
    }

    virtual ~Main() {}
};
int main() {
    int d;
    cin >> d;
    Main main(d);
    main.determineDayOfWeek();
    return 0;
}
