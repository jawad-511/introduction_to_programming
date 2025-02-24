#include <iostream>
using namespace std;


int main()
{

    int number;
    cout << "Please enter a number\n";
    cin >> number;

    int i = 1;
    while(i <= number)
    {
        cout << i << endl;
        i++;
    }

    return 0;
}