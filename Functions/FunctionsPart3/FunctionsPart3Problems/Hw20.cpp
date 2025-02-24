#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.14;
float area(int d);


int main() {

    int a;

    cout << "enter a: \n";
    cin >> a;

    float result = area(a);
    cout << "Area is: " << result;

    return 0;
}


float area(int a)
{
    float area = (PI * pow(a, 2)) / 4 ;
    return area;
}

