#include <iostream>
#include <math.h>
using namespace std;
//This program takes seconds as input and calculate the days , hours , minutes
int main() {

    int totalSeconds;
    cout << "Enter the totalSeconds: \n";
    cin >> totalSeconds;

    int secondPerDay = 24 * 60 * 60;
    short secondPerHour = 60 * 60;
    short secondPerMinute = 60;

    short numberOfDays = floor(totalSeconds / secondPerDay);
    short remainder = totalSeconds % secondPerDay;

    short numberOfHours = floor(remainder / secondPerHour);
    remainder = remainder % secondPerHour;

    short numberOfMinutes = floor(remainder / secondPerMinute);
    remainder = remainder % secondPerMinute;

    short numberOfSeconds = remainder;
    

    cout << "The days: " << numberOfDays << "\n The hours: " << numberOfHours <<"\n The minutes: " << numberOfMinutes << "\n The seconds is:  "<< numberOfSeconds;

    return 0;
} 