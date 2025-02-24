#include <iostream>
using namespace std;

int readNumberFromUser()
{
    int n;

    cout << "Enter number please\n";
    cin >> n;
    cout << "\n\n";

    return n;
}

void printNumber(int n)
{
    for(int i = n; i >= 1; i = i-1)
    {
        cout << i << endl; 
    }
}

int main()
{

     printNumber(readNumberFromUser());


    return 0;
}