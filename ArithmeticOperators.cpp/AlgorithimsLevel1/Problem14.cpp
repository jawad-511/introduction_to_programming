#include <iostream>
using namespace std;

int main() {

    short num1 , num2 , tmp;
    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    cout << "\n\n";
    cout << "The value of num1 is: " << num1 << "\n" ;
    cout << "and the value of num2 is: " << num2 << "\n";

    cout << "The proccess of swaping is running...\n";

    tmp = num1;
    num1 = num2;
    num2 = tmp;

    cout << "After the swap The value of num1 is: " << num1 << "\n";
    cout << "The value of num2 is: " << num2 << "\n";






    return 0;
}