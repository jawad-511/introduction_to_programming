#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.14;

float area(int l);


int main() {

    int l;

    cout << "enter l: \n";
    cin >> l;

    float result = area(l);
    cout << "Area is: " << result;

    return 0;
}


float area(int l)
{
    float area = (pow(l, 2)) / (4 * PI);
    return area;
}

