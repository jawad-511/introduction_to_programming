#include <iostream>
using namespace std;
int area(int a , int b);


int main() {

    int a , b;

    cout << "enter a: \n";
    cin >> a;

    cout << "enter b: \n";
    cin >> b;

    int result = area(a, b);
    cout << "Area is: " << result;

    return 0;
}


int area(int a, int b)
{
    int area = a * b;

    return area;
}

