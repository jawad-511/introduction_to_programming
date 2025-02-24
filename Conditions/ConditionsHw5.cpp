#include <iostream>
using namespace std;
void readPinCode(short &pinCode)
{
    cout << "Enter your pin code\n";
    cin >> pinCode;
}

void checkPin(short pinCode , int &userBalance)
{
    if(pinCode == 1234)
    {
         cout << "Your balance is: " << userBalance << endl;
         
    }
    else 
    {
     cout << "Wrong PIN\n";
    }
 
}

int main()
{

   short pinCode;
   int userBalance = 7500;
   readPinCode(pinCode);
   checkPin(pinCode , userBalance);

   

  

  



    return 0;
}