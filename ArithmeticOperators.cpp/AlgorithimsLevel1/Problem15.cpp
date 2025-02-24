#include <iostream>
using namespace std;

int main() {

    short a , b;
    cout << "Enter the first side of the rectangle\n";
    cin >> a;

    cout << "Enter the second side of the rectangle\n";
    cin >> b;

    short area = a * b;
    cout << "The rectangle is: " << area;


    return 0;
}