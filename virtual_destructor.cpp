/*
Deleting a derived class object using a pointer of base class type that has a non-virtual destructor results in undefined behavior.
To correct this situation, the base class should be defined with a virtual destructor. 
*/

// #include<iostream>
// using namespace std;

// class base
// {
//     public:
//         base(){cout<<"base class constructor called.."<<endl;}
//         ~base(){cout<<"base class destructor called.."<<endl;}
// };
// class child:public base
// {
//     public:
//         child(){cout<<"child class constructor called.."<<endl;}
//         ~child(){cout<<"child class destructor called.."<<endl;}
// };
// int main()
// {
//     child *ob = new child();
//     base *b = ob;
//     delete b;
//     return 0;
// }

/*
Making base class destructor virtual guarantees that the object of derived class is destructed properly,
i.e., both base class and derived class destructors are called. For example, 
*/

#include<iostream>
using namespace std;

class base
{
    public:
        base(){cout<<"base class constructor called.."<<endl;}
        virtual ~base(){cout<<"base class destructor called.."<<endl;}
};
class child:public base
{
    public:
        child(){cout<<"child class constructor called.."<<endl;}
        virtual ~child(){cout<<"child class destructor called.."<<endl;}
};
int main()
{
    child *ob = new child();
    base *b = ob;
    delete b;
    return 0;
}