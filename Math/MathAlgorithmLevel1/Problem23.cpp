#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.14;

int main() {

    double a , b , c;
    cout << "Enter a: \n";
    cin >> a;
    cout << "Enter b: \n";
    cin >> b;
    cout << "Enter c: \n";
    cin >> c;

    float p = (a + b + c) / 2;

    float t = (a * b * c) / (4 * sqrt(p * (p-a) * (p-b) * (p-c)));
    float area = (pow(t, 2)) * PI;
    cout << "The area is: " << round(area);

    return 0;
}