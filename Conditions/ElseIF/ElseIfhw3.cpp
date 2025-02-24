#include <iostream>
using namespace std;


int main()
{

    int num1, num2 , result;
    string operationType;

    cout << "Enter the first number\n";
    cin >> num1;

    cout << "Enter the second number\n";
    cin >> num2;

    cout << "Operation Type\n";
    cin >> operationType;

    if(operationType == "+")
    {
        result = num1 + num2;
        cout << result;
    }
    else if(operationType == "-")
    {
        result = num1 - num2;
        cout << result;
    }
    else if(operationType == "*")
    {
        result = num1 * num2;
        cout << result;
    }
    else if(operationType == "/")
    {
        result = num1 / num2;
        cout << result;
    }
    else
    {
        cout << "Invalid Operation";
    }


    

    return 0;
}