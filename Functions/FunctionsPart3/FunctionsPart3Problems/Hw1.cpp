#include <iostream>
using namespace std;

void printMyName(string name) {

    cout << "hello, " << name; 
}

int main() {

    cout << "Enter your name please: \n";
    string myName;
    cin >> myName;

    printMyName(myName);

    return 0;
}