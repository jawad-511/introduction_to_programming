#include <iostream>
using namespace std;
int main() {

//Note: Always Relational operators return either true or false
    int a , b;
    cout << "please enter number 1: \n";
    cin >> a; 
    
    cout << "please enter number 2: \n";
    cin >> b;

    cout <<a << " = " << b  << " is " << (a == b) << endl;
    cout <<a << " != " << b  << " is " << (a != b) << endl;
    cout <<a << " > " << b  << " is " << (a > b) << endl;
    cout <<a << " < " << b  << " is " << (a < b) << endl;
    cout <<a << " >= " << b  << " is " << (a >= b) << endl;
    cout <<a << " <= " << b  << " is " << (a <= b) << endl;

    return 0;
}