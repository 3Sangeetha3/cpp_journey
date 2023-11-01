//The diamond problem The diamond problem occurs when two superclasses of a class have a common base class.

// #include <iostream>
// using namespace std;

// class Person
// {
//     public:
//     int a;
//         Person(int x)
//         {
//             cout << "Person constructor called " <<x<< endl;
//         }
// };
// class Faculty : public Person
// {
//     public:
//         Faculty(int x):Person(x)
//         {
//             cout << "Faculty constructor called " <<x<< endl;
//         }
// };
// class Student : public Person
// {

//     public:
//         Student(int x):Person(x)
//         {
//             cout << "Student constructor called " <<x<< endl;
//         }
// };
// class TA : public Faculty, public Student
// {
//     public:
//         TA(int x):Student(x), Faculty(x)
//         {
//             cout << "TA constructor called " <<x<< endl;
//         }
// };

// int main()
// {
//     TA ta1(30);
//     return 0;
// }

//solution of the ambiguity problem

#include <iostream>
using namespace std;

class Person
{
    public:
    int a;
        Person(int x)
        {
            cout << "Person constructor called " <<x<< endl;
        }
};
class Faculty : virtual public Person
{
    public:
        Faculty(int x):Person(x)
        {
            cout << "Faculty constructor called " <<x<< endl;
        }
};
class Student : virtual public Person
{

    public:
        Student(int x):Person(x)
        {
            cout << "Student constructor called " <<x<< endl;
        }
};
class TA : public Student,public Faculty
{
    public:
        TA(int x):Student(x), Faculty(x), Person(x)
        {
            cout << "TA constructor called " <<x<< endl;
        }
};

int main()
{
    TA ta1(30);
    return 0;
}
