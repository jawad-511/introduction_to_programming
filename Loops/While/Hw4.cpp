#include <iostream>
using namespace std;


int main()
{

    int number;
    cout << "Please enter a number\n";
    cin >> number;

    int i = 1;
    int sum = 0;
    while(i <= number)
    {
       if(i % 2 == 0)
       {
        sum = sum + i;
       }
        i++;
    }
    cout << "Sum: " << sum;

    return 0;
}