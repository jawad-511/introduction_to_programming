#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.14;

int main() {

    double a , b;
    cout << "Enter a: \n";
    cin >> a;
    cout << "Enter b: \n";
    cin >> b;

    float area = ((PI * pow(b,2)) / 4) * ((2 * a - b) / (2 * a + b));
    cout << "The arae is: " << floor(area);

    return 0;
}