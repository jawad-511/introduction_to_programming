#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.14;

int main() {

    float a;
    cout << "enter a: \n";
    cin >> a;

    float area = (PI * pow(a, 2)) / (4);
    cout << "the area is: " << ceil(area);


    return 0;
}