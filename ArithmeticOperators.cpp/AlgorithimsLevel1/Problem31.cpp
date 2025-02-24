#include <iostream> 
using namespace std;

int main() {

    short number;
    cout << "Please enter a number: \n";
    cin >> number;

    short square = number * number;
    short cube = number * number * number;
    short powerFour = number * number * number * number;

    cout << "\n" << square << "\n" << cube << "\n" << powerFour;
    return 0;
}
