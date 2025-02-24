#include <iostream> 
#include <cmath>
using namespace std;

int main() {

    short number1, number2;
    cout << "Enter number1: " << endl;
    cin >> number1;

    cout << "Enter number2: " << endl;
    cin >> number2;

    short result = pow(number1, number2);
    cout << endl << result;
    return 0;
}