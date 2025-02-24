#include <iostream>
#include <cmath>

using namespace std;
void power(int a);

int main()
{

    int a;

    cout << "enter a: \n";
    cin >> a;

    power(a);

    return 0;
}

void power(int a)
{
    cout << endl << pow(a, 2) << endl;
    cout << pow(a, 3) << endl;
    cout << pow(a, 4) << endl;
}
