#include <iostream>
#include <string>

using namespace std;

struct Person
{
    string name;
    short age;
    string city;
    string country;
    float monthlySalary;
    float YearlySalary; 
    char sex;
    bool isMarieed;
};


void readInformation(Person &p1) {

    cout << "Enter name: \n";
    getline(cin, p1.name);

    cout << "Enter age: \n";
    cin >> p1.age;

    cout << "Enter city: \n";
    cin >> p1.city;

    cout << "Enter country: \n";
    cin >> p1.country;

    cout << "Enter monthlySalary: \n";
    cin >> p1.monthlySalary;

    p1.YearlySalary = p1.monthlySalary * 12;

    cout << "Enter your gender male: 0 , Female : 1: \n";
    cin >> p1.sex;

    cout << "Enter married?: \n";
    cin >> p1.isMarieed;


}

void printInformation(Person p) 
{
    cout << "\n****************************************************\n";
    cout << "Name : " << p.name << endl; 
    cout << "Age : " << p.age << endl; 
    cout << "City : " << p.city << endl;
    cout << "Country : " << p.country << endl;
    cout << "MonthlySalary : " << p.monthlySalary << endl;
    cout << "YearlySalary : " << p.YearlySalary << endl;
    cout << "Gender : " << p.sex << endl;
    cout << "Marreid : " << p.isMarieed << endl;      
}


int main()
{

    Person p1;
    readInformation(p1);
    printInformation(p1);


    return 0;
}