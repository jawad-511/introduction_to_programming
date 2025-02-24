#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.14;

int main() {

    float L;
    cout << "enter L: \n";
    cin >> L;

    float area = (pow(L , 2)) / (4 * PI);
    cout << "The area is: " << floor(area);


    return 0;
}