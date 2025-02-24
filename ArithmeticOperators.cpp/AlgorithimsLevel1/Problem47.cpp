#include <iostream>
using namespace std;

int main() {
    
    int loanAmount;
    short monthlyInstallment;

    cout << "Enter the loan amount: \n";
    cin >> loanAmount;

    cout << "Enter the monthly Installment: \n";
    cin >> monthlyInstallment;


   short totalMonths = loanAmount / monthlyInstallment;
   cout << totalMonths << " Months";

    return 0;
}