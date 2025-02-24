#include <iostream> 
#include <string>
using namespace std;

int x = 100;//global variable
int y = 200;//global Variable


void myFunction()
{
    int x = 1;//Local variable
    int y = 2;//Local variable
    cout << "The value of x inside function is: " << x << endl;
    cout << "The value of y inside function is: " << y << endl;

}

int main() //Entry Point
{

    int  x = 511;
    int y = 505;

    cout << "The local Value of x is: " << x << endl;
    cout << "The local Value of y is: " << y << endl;

     myFunction();

     cout << "The Global value of x is: " << ::x << endl;
     ::x = ::x + 10;
     cout << "The Global value of x is after increment: " << ::x << endl;

     cout << "The Global value of y is: " << ::y << endl;
     ::y = ::y + 200;
     cout << "The Global value of y is after increment: " << ::y << endl;


     
    return 0;
}