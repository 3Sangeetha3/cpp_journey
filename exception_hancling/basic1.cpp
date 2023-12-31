/*
There is a special catch block called the ‘catch all’ block, written as catch(…), that can be used to catch all types of exceptions. 
For example, in the following program, an int is thrown as an exception, but there is no catch block for int, so the catch(…) block will be executed. 
*/
#include <iostream>
using namespace std;

int main()
{
	try {
        //throw 10;
        char a = 'b';
        throw a;
	}
	catch (char &a) {
		cout << "Caught " << a<<endl;
	}
    

    try
    {
        throw 10;
    }
	catch (...) {
		cout << "Default Exception\n";
	}

//Implicit type conversion doesn’t happen for primitive types. For example, in the following program, ‘a’ is not implicitly converted to int. 

    try  {
       throw 'a';
    }
    catch (int x)  {
        cout << "Caught " << x;
    }
    catch (...)  {
        cout << "Default Exception\n";
    }

//If an exception is thrown and not caught anywhere, the program terminates abnormally.
//For example, in the following program, a char is thrown, but there is no catch block to catch the char.  

    try  {
       throw 'a';
    }
    catch (int x)  {
        cout << "Caught ";
    }
	return 0;
}
