#include<iostream>
using namespace std;

class A
{
    protected:
        int a;
    public: 
        void Set_A()
        {
            cout<<"Enter the value of A = ";
            cin>>a;
        }
        void display_A()
        {
            cout<<"The value of A = "<<a<<endl;
        }
};
class B : public A
{
    int b,p;
    public:
        void Set_B()
        {
            Set_A();
            cout<<"Enter the value of B = ";
            cin>>b;
        }
        void display_B()
        {
            display_A();
            cout<<"The value of B = "<<b<<endl;
        }
        void cal_product()
        {
            p = a*b;
            cout<<"The product of A and B = "<<a<<" * "<<b<<" = "<<p;
        }
};
int main()
{
    B obj;
    obj.Set_B();
    obj.display_B();
    obj.cal_product();
    return 0;
}

/*
// Example: 

#include<iostream> 
using namespace std; 

class A 
{ 
	protected: 
	int a; 
	
	public: 
		void set_A(int x) 
		{ 
			a=x;			 
		} 
	
		void disp_A() 
		{ 
			cout<<endl<<"Value of A="<<a; 
		} 
}; 

class B: public A 
{ 
	int b,p; 
	
	public: 
		void set_B(int x,int y) 
		{ 
			set_A(x); 
			b=y; 
		} 
		
		void disp_B() 
		{ 
			disp_A(); 
			cout<<endl<<"Value of B="<<b; 
		} 
		
		void cal_product() 
		{ 
			p=a*b; 
			cout<<endl<<"Product of "<<a<<" * "<<b<<" = "<<p; 
		} 
		
}; 

main() 
{ 
	B _b; 
	_b.set_B(4,5); 
	_b.cal_product(); 
	
	return 0; 
}

*/