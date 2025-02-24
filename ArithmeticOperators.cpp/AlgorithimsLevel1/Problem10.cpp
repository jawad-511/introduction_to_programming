#include <iostream>
using namespace std;

int main() {

    short mark1 , mark2 , mark3 , average;
    cout << "Enter mark1: ";
    cin >> mark1;

    cout << "Enter mark2: ";
    cin >> mark2;

    cout << "Enter mark3: ";
    cin >> mark3;

    average = (mark1 + mark2 + mark3) / 3;
    cout << "The average is: " << average;



    return 0;
}