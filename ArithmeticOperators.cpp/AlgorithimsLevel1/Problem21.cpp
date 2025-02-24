 #include <iostream>
using namespace std;
const float PI = 3.14;
int main() {

    short L;
    cout << "Enter L: \n";
    cin >> L;

    float circleArea = (L * L) / (4 * PI);
    printf("the area of the circle uisng circumference %f " , circleArea);

    return 0;
}