#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.14;

int main() {
    float r;
    cout << "Enter r: \n";
    cin >> r;

    double area = PI * pow(r, 2);
    cout << "THE AREA IS: " << ceil(area);   


    return 0;
}