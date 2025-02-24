#include <iostream>
using namespace std;

int readNumberFromUser()
{
    int n;
    cout << "Enter a number\n";
    cin >> n;
    return n;
}


int sumOddNumbers(int n) // takes n as an input then sum all of the odd number before it
{
    int sum = 0;
    for(int i = 1; i <= 10; i++)
    {
        if(i % 2 == 0){
        sum = sum + i;
    }

    
    }
return sum;
}

int main()
{
    cout << sumOddNumbers(readNumberFromUser());
}