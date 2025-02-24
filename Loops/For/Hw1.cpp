#include <iostream>
using namespace std;

int readNumberFromUser()
{
    int n;

    cout << "Enter number please\n";
    cin >> n;

    return n;
}

void printNumber(int n)
{
    for(int i = 1; i <= n; i++)
    {
        cout << i << endl; 
    }
}

int main()
{

     printNumber(readNumberFromUser());


    return 0;
}