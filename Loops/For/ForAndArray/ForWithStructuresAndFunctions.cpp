#include <iostream>
using namespace std;
struct Person 
{
    string firstName;
    string lastName;
    int age;
    string phone;
};

void readUserInfo(Person &p)
{
    cout << "Please Enter First name\n";
    cin >> p.firstName;

    cout << "Please Enter Last name\n";
    cin >> p.lastName;

    cout << "Please Enter age\n";
    cin >> p.age;

    cout << "Please Enter phone\n";
    cin >> p.phone;

}

void printUserInfo(Person p)
{
    cout << "\n**************************************************\n";

    cout << "FirstName : " << p.firstName << endl;
    cout << "LastName : " << p.lastName << endl;
    cout << "Age : " << p.age << endl;
    cout << "Phone : " << p.phone << endl;

    cout << "\n**************************************************\n";
}

void readUsersInfo(Person persons[] , int &numOfPersons)
{
    cout << "How many persons?\n";
    cin >> numOfPersons;
    for(int i = 0; i < numOfPersons; i++)
    {
        cout << "Please Enter Person's " << i + 1 << "info: \n";
        readUserInfo(persons[i]);
    }
  

}

void printUsersInfo(Person persons[] , int numOfPersons)
{

   for(int i = 0; i < numOfPersons; i++)
    {
        cout << "Person's " << i + 1 << "info: \n"; 
        printUserInfo(persons[i]);
    }
}


int main()
{

    Person persons[100];
    int numberOfPersons = 1;

    readUsersInfo(persons , numberOfPersons);
    printUsersInfo(persons , numberOfPersons);




    return 0;
}