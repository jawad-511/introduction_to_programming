#include <iostream>
using namespace std;


int main()
{

    short dayNum;
    

    do
    {
        cout << "Enter Day number\n";
        cin >> dayNum;
    }while(dayNum < 1 || dayNum > 7);
    
    if(dayNum == 1)
    {
        cout << "Sunday";
    }
    else if(dayNum == 2)
    {
        cout << "Monday";
    }
    else if(dayNum == 3)
    {
        cout << "Tuesday";
    }
    else if(dayNum == 4)
    {
        cout << "Wenesday";
    }
    else if(dayNum == 5)
    {
        cout << "Thursday";
    }
    else if(dayNum == 6)
    {
        cout << "Friday";
    }
    else
    {
        cout << "Saturday";
    }


    return 0;
}