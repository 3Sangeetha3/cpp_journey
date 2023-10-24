#include<iostream>
using namespace std;
class stud1
{
    private: string notes;
    public: void show()
    {
        notes = "stud1's notes ";
    }
    friend void stud2(stud1 ob2);
};
void stud2(stud1 ob2)
{
    cout<<"stud2 can use now "<<ob2.notes<<endl;
}
int main()
{
    stud1 ob1;
    ob1.show();
    stud2(ob1);
    return 0;
}