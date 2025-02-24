#include <iostream>
using namespace std;

int main() 
{
/*
    if (condition == true)
    {
    
    //if condition code
    
    }
    else
    {

        //else body executes only if false
    
    }

    //Rest of program code
*/

    // int x = 10;

    // if (x >= 10 && x > 20) 
    // {
    //     cout << "I am if Condition block\n";
    // }

    // else{
    //     cout << "I am Else block\n";
    // }

    // cout << "I am Main block";

    int x;

    cout << "Please enter your number? \n";
    cin >> x;

    if (x > 5)
    {
        cout << "Yes , x is greater than 5\n";
    }
    else 
    {
        cout << "No , x is less than 5\n";
    }

    cout << "The code after if body always executed\n";

    return 0;
}