#include <iostream>
using namespace std;
const float PI = 3.14;
int main() {

    short a;
    cout << "Enter A: \n";
    cin >> a;

    float circleArea = (PI * (a * a) ) / 4;
    printf("the area of the circle is %f " , circleArea);

    return 0;
}