#include <iostream>
using namespace std;


int main()
{

    int number;
    int m;
    int counter = 1;

    cout << "Please enter the base number\n";
    cin >> number;

    cout << "Please enter the exponent number\n";
    cin >> m;

    int result = 1;
    while(counter <= m)
    {
        result = result * number;
        counter++;
    }

    cout << "Result is: " << result;
    return 0;
}