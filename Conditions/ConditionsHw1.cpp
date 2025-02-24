#include  <iostream>
using namespace std;

void readDriverInfo(int &driverAge , bool &haveDiverLicense)
{
    

    cout << "Enter your age\n";
    cin >> driverAge;

    cout << "Do you have a driver license?\n";
    cin >> haveDiverLicense;
}

void checkDriverInfo(int age , bool haveDriverLicense)
{
    if(age > 21 && haveDriverLicense)
    {
        cout << "Hired\n";
    }
    else
    {
        cout << "Rejected\n";
    }
}

int main()
{

    int age;
    bool haveDriverLicense;

    readDriverInfo(age, haveDriverLicense);
    checkDriverInfo(age, haveDriverLicense);
   

    return 0;
}