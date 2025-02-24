#include <iostream>
using namespace std;

int readNumberFromUser()
{
    int n;
    cout << "Enter a number\n";
    cin >> n;
    return n;
}


int factorialNumber(int n) // takes n as an input then sum all of the odd number before it
{
    int result = 1;
    for(int i = n; i >= 1; i--)
    {
        result = result * i;
    }
    return result;
   
}

int main()
{
    cout << factorialNumber(readNumberFromUser());
}