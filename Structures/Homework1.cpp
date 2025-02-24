#include <iostream>
#include <string>
using namespace std;

struct ContactInformation {
    string phone;
    string instagram;
};

struct Address {
    string street;
    short poBox;
};

struct Person {
    string name;
    short age;
    string city;
    string country;
    float monthlySalary;
    float YearlySalary; // Initialize dynamically later
    char sex;
    bool isMarieed;
    Address personAddress;
    ContactInformation personContact;
};

int main() {
    Person p1;

    cout << "Please Enter Your name: ";
    cin.ignore(); // Clear any leftover newline
    getline(cin, p1.name);

    cout << "Please Enter Your age: ";
    cin >> p1.age;

    cout << "Please Enter Your city: ";
    cin.ignore(); // Clear the newline character
    getline(cin, p1.city);

    cout << "Please Enter Your country: ";
    getline(cin, p1.country);

    cout << "Please Enter Your monthly salary: ";
    cin >> p1.monthlySalary;

    // Calculate yearly salary
    p1.YearlySalary = p1.monthlySalary * 12;

    cout << "Please Enter the first character of Your gender: ";
    cin >> p1.sex;

    cout << "Are you married? (1 for Yes, 0 for No): ";
    cin >> p1.isMarieed;

    cout << "Enter Your PoBox: ";
    cin >> p1.personAddress.poBox;

    cout << "Enter Your Street: ";
    cin.ignore(); // Clear newline from buffer
    getline(cin, p1.personAddress.street);

    cout << "Enter your Instagram handle: ";
    getline(cin, p1.personContact.instagram);

    cout << "Enter your phone number: ";
    getline(cin, p1.personContact.phone);

    // Print user information
    cout << "\n**************************\n";
    cout << "Name: " << p1.name << "\nAge: " << p1.age << endl;
    cout << "City: " << p1.city << "\nCountry: " << p1.country << endl;
    cout << "Monthly Salary: " << p1.monthlySalary 
         << "\nYearly Salary: " << p1.YearlySalary << endl;
    cout << "Gender: " << p1.sex 
         << "\nMarried: " << (p1.isMarieed ? "Yes" : "No") << endl;
    cout << "PoBox: " << p1.personAddress.poBox 
         << "\nStreet: " << p1.personAddress.street << endl;
    cout << "Phone: " << p1.personContact.phone 
         << "\nInstagram: " << p1.personContact.instagram << endl;

    return 0;
}
