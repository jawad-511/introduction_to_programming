#include <iostream>
#include <cmath>
const float PI = 3.14;
using namespace std;
float area(int a , int b);


int main() {

    int a , b;

    cout << "enter a: \n";
    cin >> a;

    cout << "enter b: \n";
    cin >> b;

    float result = area(a, b);
    cout << "Area is: " << result;

    return 0;
}


float area(int a, int b)
{
    float area = ((PI * pow(b, 2)) / 4) * ((float)(2 * a - b) / (2 * a + b));

    return area;
}

