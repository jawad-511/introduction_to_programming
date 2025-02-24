#include <iostream>
using namespace std;

int main() {

    short a , h;
    cout << "Enter the first a of the rectangle\n";
    cin >> a;

    cout << "Enter the second height of the rectangle\n";
    cin >> h;

    short rectangleArea = (a/2) * h;
    cout << "The rectangle is: " << rectangleArea;


    return 0;
}