#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.14;
float area(int r);


int main() {

    int r;

    cout << "enter r: \n";
    cin >> r;

    float result = area(r);
    cout << "Area is: " << result;

    return 0;
}


float area(int r)
{
    float area = PI * pow(r ,2);
    return area;
}

