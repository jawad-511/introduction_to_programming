#include <iostream>
#include <cmath>
const float PI = 3.14;
using namespace std;
float area(int a , int b , int c);


int main() {

    int a , b , c;

    cout << "enter a: \n";
    cin >> a;

    cout << "enter b: \n";
    cin >> b;

    cout << "enter c: \n";
    cin >> c;

    float result = area(a, b , c);
    cout << "Area is: " << result;

    return 0;
}


float area(int a, int b , int c)
{
    int p = (a + b + c) / 2;
    float area = pow((a * b * c) / (4 * sqrt(p*(p-a) * (p-b) * (p-c))), 2);
    area *= PI;

    return area;
}
