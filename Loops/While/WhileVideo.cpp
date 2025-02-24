#include <iostream>
using namespace std;


/*
 use While loop when you don't know how much number of iterations
    
    while(condition) // While condition is true execute the code
    {
        Body of yhe loop
        it will be executed until the condition be false
    }

*/

int readIntegerNumberInRange(int from , int to)
{
    int number;
    cout << "Please Enter Number between " << from << " and " << to << endl;
    cin >> number;

    while(number < from || number > to)
    {
        cout << "Wrong number\n";
        cout << "Please Enter Number between " << from << " and " << to << endl;
        cin >> number;
    }

    return number;
}

int main()
{

    
    // int i = 1;
    // while(i <= 5)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    // int number;
    // cout << "Plz Enter number\n";
    // cin >> number;

    // while(number < 0)
    // {
    //     cout << "Not valid number, Execuse me enter positive number\n";
    //     cin >> number;
    // }

    // cout << "The number: " << number;

    cout << "\nThe number is: " << readIntegerNumberInRange(18, 45);

   

    return 0;
}