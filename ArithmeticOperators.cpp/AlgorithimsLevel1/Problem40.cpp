#include  <iostream>
using namespace std;

int main() {

    float billValue;
    cout << "Enter Bill Value\n";
    cin >> billValue;

    float totalBill = (billValue + (billValue * 10/100)) + (billValue * 16 / 100);
    cout << "The total Bill is: " << totalBill;

    return 0;
}