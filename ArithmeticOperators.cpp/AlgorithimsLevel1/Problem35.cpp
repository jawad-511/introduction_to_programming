#include  <iostream>
using namespace std;

int main() {

    short pennies , nickles , dimes , quarters , dollars;
    cout << "Enter The pennies: \n";
    cin >> pennies;

    cout << "Enter The nickles: \n";
    cin >> nickles;

    cout << "Enter The dimes: \n";
    cin >> dimes;

    cout << "Enter The quarters: \n";
    cin >> quarters;

    cout << "Enter The dollars: \n";
    cin >> dollars;

    float totalPennies = pennies * 1 + nickles * 5 + dimes * 10 + quarters * 25 + dollars * 100; 
    float totalDollars = totalPennies / 100;
    cout <<  "The total pennies is: " << totalPennies << "\n the total dollars is: " << totalDollars;

    return 0;
}