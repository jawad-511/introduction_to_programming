#include <iostream>
#include <cmath>

using namespace std;
float calculateTaskDurationInSeconds(int d, int h , int m , int s);


int main() {

    int d,  h ,  m ,  s;

    cout << "enter d: \n";
    cin >> d;

    cout << "enter h: \n";
    cin >> h;

    cout << "enter m: \n";
    cin >> m;

    cout << "enter s: \n";
    cin >> s;

    float result = calculateTaskDurationInSeconds(d, h , m ,s);
    cout << "Task Duration In Seconds is: " << result;

    return 0;
}


float calculateTaskDurationInSeconds(int d, int h , int m , int s)
{
   int dayToSeconds = (d * 24 * 60 * 60);
   int hourToSeconds = (h * 60 * 60);
   int minutesToSeconds = (m * 60);
   int seconds = s;

   int totalSeconds = dayToSeconds + hourToSeconds + minutesToSeconds + seconds;

    return totalSeconds;
}
