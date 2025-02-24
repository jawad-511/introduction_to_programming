#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.14;
float area(int d);


int main() {

    int d;

    cout << "enter d: \n";
    cin >> d;

    float result = area(d);
    cout << "Area is: " << result;

    return 0;
}


float area(int d)
{
    float area = (PI * pow(d ,2)) / 4;
    return area;
}

