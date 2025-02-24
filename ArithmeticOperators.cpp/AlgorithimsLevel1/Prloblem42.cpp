#include <iostream> 
using namespace std;
//This program calculate the task duration in seconds

int main() {
    short days , hours, minutes , seconds ;

    cout << "Please enter the days you worked in the task: \n";
    cin >> days;

    cout << "Please enter the hours you worked in the task: \n";
    cin >> hours;

    cout << "Please enter the minutes you worked in the task: \n";
    cin >> minutes;

    cout << "Please enter the seconds you worked in the task: \n";
    cin >> seconds;

    float totalSeconds = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;
    cout << "The total seconds is: " << totalSeconds;
    return 0;
}