#include <iostream>
using namespace std;

enum enWeekDays {
    sun = 1,
    mon = 2,
    tus = 3,
    wen = 4,
    thu = 5,
    fri = 6,
    sat = 7
};

void showWeekDaysMenu()
{
    cout << "*******************************\n";
    cout << "\tWeekDays\n";
    cout << "*******************************\n";
    cout << "1: Sunday\n";
    cout << "2: Monday\n";
    cout << "3: Tuesday\n";
    cout << "4: Wenesday\n";
    cout << "5: Thursday\n";
    cout << "6: Friday\n";
    cout << "7: Saturday\n";
    cout << "*******************************\n";
    cout << "Please Enter the number of the day?\n";
    
}

enWeekDays readWeekDay()
{   
    enWeekDays enWeekDay;
    

    int numDay;
    cin >> numDay;
    enWeekDay = (enWeekDays) numDay;

    return enWeekDay;
}

string getWeekDayName(enWeekDays enWeekDay)
{
    switch(enWeekDay)
    {
        case enWeekDays::sun:
            return "Sunday";
            break;
        case enWeekDays::mon:
            return "Monday";
            break;
        case enWeekDays::tus:
            return "Tuesday";
            break;
        case enWeekDays::wen:
            return "Wenesday";
            break;
        case enWeekDays::thu:
            return "Thursday";
            break;
        case enWeekDays::fri:
            return "Friday";
            break;
        case enWeekDays::sat:
            return "Saturday";
            break;

    }
    return "Non valid week day";
}

int main()
{
    showWeekDaysMenu();
    cout << "Today is: " << getWeekDayName(readWeekDay());

    return 0;
}