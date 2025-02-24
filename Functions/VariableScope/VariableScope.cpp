#include <iostream> 
#include <string>
using namespace std;

int x = 300;//global variable


void myFunction()
{
    int x = 500;//Local variable
    cout << "The value of x inside function is: " << x << endl;

}

int main() 
{

    int  x = 511;
    cout << "The local Value of x is: " << x << endl;
     myFunction();

     cout << "The Global value of x is: " << ::x << endl;
     ::x = ::x + 1;
     cout << "The Global value of x is after increment: " << ::x << endl;


     
    return 0;
}