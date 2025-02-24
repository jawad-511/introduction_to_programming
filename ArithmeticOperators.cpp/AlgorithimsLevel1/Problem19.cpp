#include <iostream>
using namespace std;
const float PI = 3.14;
int main() {

    short d;
    cout << "Enter the first side of the rectangle\n";
    cin >> d;

    float circleArea = (d * d * PI) / 4;
    printf("the area of the circle is %f " , circleArea);

    return 0;
}