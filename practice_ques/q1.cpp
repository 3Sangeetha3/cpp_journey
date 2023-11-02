/*
Ria is developing a simple educational game for children to test their knowledge of uppercase and lowercase letters.
The game will present four letters, and the children will input their answers for each letter.
Her task is to implement a program that calculates the score based on the following rules:

For every correct uppercase letter input, the player earns 10 points.
For every correct lowercase letter input, the player loses 5 points.
The game presents four letters, and the player will provide their answers one by one.
After receiving all four answers, the program will display the final score.

Create a base class called QuizGame with the virtual method void game().
Define this method in the derived class called StudentScore to calculate the total score based on the number of correct and incorrect answers.

Input format :
The input consists of four characters separated by a space.

Output format :
The output prints the total score.

Code constraints :
The input should be a valid letter from the English alphabet (A to Z or a to z).

Sample test cases :
Input 1 :
A F K R
Output 1 :
Score : 40
Input 2 :
A b D f
Output 2 :
Score : 10
*/
// You are using GCC
#include<iostream>
#include<cctype>
using namespace std;
class QuizGame
{
    public:
    virtual void game(){}
};
class StudentScore:public QuizGame
{
    public: 
    void game()
    {
        char a[4];int score = 0;
        for(int i=0;i<4;i++)
        {
            cin>>a[i];
        }
            for(int i=0;i<4;i++)
            {
                if(isupper(a[i])){score+=10;}
                else if(islower(a[i])){score-=5;}
            }
        cout<<"Score: "<<score<<endl;
    }
};
int main()
{
    StudentScore s;
    s.game();
    return 0;
}