#include <iostream>
using namespace std;


int main()
{

    int pinCode;
    int userBalance = 7500;
    int counter = 3;

    while(counter >= 1)
    {
        if(pinCode == 1234)
        {
            cout << "Your Balance is: " << userBalance << endl;
            break;
        }

        cout << "Wrong Pin, please enter your pin again , You have " << counter << " trials\n";
        cin >> pinCode;
        counter--;
    }

    if(pinCode != 1234)
    {
        cout << "Your card is Locked\n";
    }

    

    return 0;
}