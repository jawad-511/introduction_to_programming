#include <iostream>
using namespace std;


int main()
{

    int sum = 0;
    int number;

    cout << "Enter number\n";
    cin >> number;

    while(number != -99)
    {
        sum = sum + number;
        cout << "Enter number\n";
        cin >> number;
    }

    cout << "Sum of all numbers is: " << sum;

    return 0;
}