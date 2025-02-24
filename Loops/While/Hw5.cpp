#include <iostream>
using namespace std;


int main()
{

    int number;
    int factorial = 1;

    cout << "Enter Positive number to calculate it's factorial\n";
    cin >> number;

    //Validation if the number is positive.
    while(number < 0)
    {
        cout << "Please Enter positive number!\n";
        cin >> number;
    }

    int counter = number;
    while(counter != 1)
    {
        factorial = factorial * counter;
        counter--; 
    }
    cout << "Factorial is: " << factorial;

    return 0;
}