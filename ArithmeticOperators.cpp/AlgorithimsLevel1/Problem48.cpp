#include <iostream>
using namespace std;

int main() {


    int loanAmount;
    short totalMonths;

    cout << "Enter the amount of the loan: \n";
    cin >> loanAmount;

    cout << "Enter the months number: \n";
    cin >> totalMonths;

    short monthlyInstallments = loanAmount / totalMonths;
    cout << "You need to pay: " << monthlyInstallments << " Riyal Every month for: " << totalMonths << " months";

    return 0;
}