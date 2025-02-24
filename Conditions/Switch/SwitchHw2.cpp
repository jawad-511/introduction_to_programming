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
    
    switch(dayNum)
    {
        case 1:
            cout << "Sunday";
            break;
        case 2:
            cout << "Monday";
            break;
        case 3:
            cout << "Tuesday";
            break;
        case 4:
            cout << "Wenesday";
            break;
        case 5:
            cout << "Thursday";
            break;

        case 6:
            cout << "Friday";
            break;
        case 7:
            cout << "Saturday";
            break;
    
    }

   

    return 0;
}