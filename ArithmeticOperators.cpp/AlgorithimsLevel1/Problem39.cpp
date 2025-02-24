#include  <iostream>
using namespace std;

int main() {

    float cashPaid , totalBill;
    cout << "Enter The cashPaid: \n";
    cin >> cashPaid;

    cout << "Enter The totalBill: \n";
    cin >> totalBill;

    float result = cashPaid - totalBill;
    cout << "The remainder is: " << result;


    return 0;
}