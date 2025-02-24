#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double a , d;
    cout << "Enter a: \n";
    cin >> a;
    cout << "Enter b: \n";
    cin >> d;
    //double p = pow(d, 2) - pow(a, 2);
    double result = a * (sqrt( pow(d, 2) - pow(a, 2)));
    cout <<"The result is: " << result;

    return 0;
}