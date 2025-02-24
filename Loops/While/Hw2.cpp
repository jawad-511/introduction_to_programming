#include <iostream>
using namespace std;


int main()
{

    int number;
    cout << "Please enter a number\n";
    cin >> number;

    int i = number;
    while(i >= 1)
    {
        cout << i << endl;
        i--;
    }

    return 0;
}