#include <iostream>
#include <string>

using namespace std;

struct strInfo
{

    string firstName;
    string lastName;
    int age;
    string phone;

};

void readInfo(strInfo &info)
{
    cout << "Enter your first Name: \n";
    cin >> info.firstName;

    cout << "Enter your last Name: \n";
    cin >> info.lastName;

    cout << "Enter your age: \n";
    cin >> info.age;

    cout << "Enter your phone number: \n";
    cin >> info.phone;
}


void printInfo(strInfo info)
{
    cout << "\n***************************************************\n";

    cout << "First name : " << info.firstName << "\nLast name : " << info.lastName
    << "\nAge : " << info.age << "\nPhone : " << info.phone;

    cout << "\n***************************************************\n";

}


int main() 
{

    strInfo Person1Info;
    readInfo(Person1Info);
    printInfo(Person1Info);

    strInfo Person2Info;
    readInfo(Person2Info);
    printInfo(Person2Info);


    return 0;
}