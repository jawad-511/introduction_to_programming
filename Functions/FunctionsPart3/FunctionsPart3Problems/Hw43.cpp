#include <iostream>
#include <cmath>

using namespace std;
void secondsToDaysAndHoursAndMinutesAndSeconds(int s);


int main() {

    int s;

    cout << "enter seconds: \n";
    cin >> s;

    
    secondsToDaysAndHoursAndMinutesAndSeconds(s);


    return 0;
}


void secondsToDaysAndHoursAndMinutesAndSeconds(int s)
{
   
    int secondPerDay = 24 * 60 * 60;
    short secondPerHour = 60 * 60;
    short secondPerMinute = 60;

    short numberOfDays = floor(s / secondPerDay);
    short remainder = s % secondPerDay;

    short numberOfHours = floor(remainder / secondPerHour);
    remainder = remainder % secondPerHour;

    short numberOfMinutes = floor(remainder / secondPerMinute);
    remainder = remainder % secondPerMinute;

    short numberOfSeconds = remainder;
    

    cout << "The days: " << numberOfDays << "\n The hours: " << numberOfHours <<"\n The minutes: " << numberOfMinutes << "\n The seconds is:  "<< numberOfSeconds;
}
