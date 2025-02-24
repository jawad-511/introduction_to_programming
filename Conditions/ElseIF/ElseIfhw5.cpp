#include <iostream>
using namespace std;


int main()
{

    short monthNumber;
    cout << "Enter Month number\n";
    cin >> monthNumber;

    if(monthNumber == 1)
    {
        cout << "January";
    }
    else if(monthNumber == 2)
    {
        cout << "February";
    }
    else if(monthNumber == 3)
    {
        cout << "March";
    }
    else if(monthNumber == 4)
    {
        cout << "April";
    }
    else if(monthNumber == 5)
    {
        cout << "May";
    }
    else if(monthNumber == 6)
    {
        cout << "June";
    }
    else if(monthNumber == 7)
    {
        cout << "July";
    }
    else if(monthNumber == 8)
    {
        cout << "August";
    }
    else if(monthNumber == 9)
    {
        cout << "September";
    }
    else if(monthNumber == 10)
    {
        cout << "October";
    }
    else if(monthNumber == 11)
    {
        cout << "November";
    }
    else if(monthNumber == 12)
    {
        cout << "December";
    }
    else
    {
        cout << "Wrong Month";
    }

    return 0;
}