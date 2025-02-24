#include <iostream>
using namespace std;

struct Person
{

    string firstname;
    string lastname;
    int age;
    string phone;

};

void readData(Person &p)//Read data For one structure 
{
    cout << "Enter your first name\n";
    cin >> p.firstname;

    cout << "Enter your last name\n";
    cin >> p.lastname;

    cout << "Enter your age name\n";
    cin >> p.age;

    cout << "Enter your phone\n";
    cin >> p.phone;

    
}
void printData(Person p)//Print Data for one structure
{
    cout << "************************************\n";
    cout << "First name : " << p.firstname << endl;
    cout << "Last name : " << p.lastname << endl;
    cout << "Age : " << p.age << endl;
    cout << "Phone : " << p.phone << endl;
    cout << "************************************\n";

}
void readPersonsData(Person p[])
{
    readData(p[0]);
    readData(p[1]);
}
void printPersonsData(Person p[]) 
{

    printData(p[0]);
    printData(p[1]);

}

int main()
{
    Person persons[2];//Array of two persons
    readPersonsData(persons);//Read data of all the people in the array
    printPersonsData(persons);//print data of all people in the array
   


    return 0;
}

