#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int number;

    for(int i = 1; i <= 5; i++)
    {
        cout << "Enter a number\n";
        cin >> number;

        if(number > 50)
        {
           continue;
        }
        sum += number;
    }

    cout << "Sum: "<< sum;

    return 0;
}