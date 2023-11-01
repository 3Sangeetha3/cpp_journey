/*
You are working on a bicycle manufacturing project, and your task is to implement a system that handles different types of bicycles.
You have a base class called "Bicycle", which contains information about the gear and speed of the bicycle. The class provides methods 
to apply brakes to reduce speed and speed up the bicycle.

Now, you need to create a specialized class named "MountainBike", which inherits from the Bicycle class.
The "MountainBike" class represents a specific type of bicycle suitable for off-road mountain biking.
Apart from the gear and speed, the mountain bike also has an additional attribute called "seatHeight", which represents the height of the bike's seat.

Your task is to design the classes "Bicycle" and "MountainBike" using inheritance and implement the necessary member functions.
The program should prompt the user to enter the gear, speed, and initial seat height of a mountain bike.
Then, it should create a MountainBike object with the provided data and display all the information about the mountain bike, including gear, speed, and seat height.

Input format :
The input consists of three integers, which represent the number of gears, speed, and seat height, separated by a space.

Output format :
The output displays the number of gears, speed of the bicycle, and seat height.

Code constraints :
1<=number of gears<=6
0<=speed<=100
0<=height<=60

Sample test cases :
Input 1 :
2 90 40
Output 1 :
No of gears are 2
Speed of bicycle is 90
Seat height is 40
Input 2 :
3 60 20
Output 2 :
No of gears are 3
Speed of bicycle is 60
Seat height is 20

*/

#include<iostream>
using namespace std;
class Bicycle
{
    int gear;
    int speed;
    public: 
    void setB(int g, int s){gear = g; speed = s;}
    void displayB()
    {
        cout<<"No of gears are "<<gear<<endl;
        cout<<"Speed of bicycle is "<<speed<<endl;
    }
};
class MountainBike : public Bicycle
{
    int seatheight;
    public: 
    void setM(int g, int s, int h){setB(g,s); seatheight = h;}
    void displayM()
    {
        displayB();
        cout<<"seat height is "<<seatheight<<endl;
    }
};
int main()
{
    MountainBike m1;
    int g, s, h;
    cin>>g>>s>>h;
    m1.setM(g,s,h);
    m1.displayM();
}