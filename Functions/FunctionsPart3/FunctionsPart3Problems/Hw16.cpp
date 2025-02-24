#include <iostream>
#include <cmath>
using namespace std;
float area(int a , int d);


int main() {

    int a , d;

    cout << "enter a: \n";
    cin >> a;

    cout << "enter d: \n";
    cin >> d;

    float result = area(a, d);
    cout << "Area is: " << result;

    return 0;
}


float area(int a, int d)
{
    float area = a * (sqrt(pow(d , 2) - pow(a, 2)));

    return area;
}

