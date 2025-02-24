#include <iostream>
using namespace std;

int main() {

    int a = 10 , b = 20;

    a += b;//a = a + b
    cout << "A = " << a << "\n";

    a -= b;// a = a - b
    cout << "a = " << a << "\n"; 

    a *= b;//a = a * b
    cout << "a = " << a << "\n";

    a /= b;//a = a / b
    cout << "a = " << a << "\n";

    a %= b;//a = a % b
    cout << "a = " << a;
    
    return 0;
}