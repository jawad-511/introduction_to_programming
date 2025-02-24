#include <iostream>

using namespace std;

// void myFunction(int num1) //Pass By Value
// {
//     num1 = 511;
//     cout << "Number inside function became: " << num1 << endl;
// }

void myFunction(int &n) //Pass By Reference
{
    n = 511;
    cout << "Number inside function became: " << n << endl;
}




int main() 
{
    int num1;

    num1 = 1000;

    myFunction(num1);

    cout << "Number after calling the function became = " << num1 << endl;
    
    cout << "Number reference in memory is: " << &num1;

    return 0;
}