#include <iostream> 
#include <cmath>
using namespace std;

int main() {



        float days , hours, minutes ,seconds;

        cout << "Enter days: " << endl;
        cin >> days;

        cout << "Enter hours: " << endl;
        cin >> hours;

        cout << "Enter minutes: " << endl;
        cin >> minutes;

        cout << "Enter seconds: " << endl;
        cin >> seconds;

        float totalSeconds = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + (seconds);
        cout << round(totalSeconds) << " seconds";


   
    return 0;
}