#include <iostream> 
using namespace std;

int main() {

    short num1 , num2;

    cout << "Pleasr enter the first number A?\n";
    cin >> num1;

    cout << "Pleasr enter the second number B?\n";
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
    cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
    cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
    cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
    cout << num1 << " % " << num2 << " = " << num1 % num2 << "\n";

    return 0;
}