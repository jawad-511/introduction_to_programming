#include <iostream>
using namespace std;

enum Gender{Male , Female};
enum Status{Single, Married};
enum Color{Red, Green , Blue}; 


int main() {

    string name = "jawad";
    short age = 44;
    string city = "Makkah";
    string country = "KSA";
    int monthlySalary = 40000;
    int yearlySalary = monthlySalary * 12;
    Gender g = Gender::Male;
    Status s = Status::Single;
    Color myFavoriteColor = Color::Blue;


    cout << "\n**************************\n";
    cout << "Name: " << name << "\nAge: " << age << endl;
    cout << "City: " << city << "\nCountry: " << country << endl;
    cout << "Monthly Salary: " << monthlySalary 
         << "\nYearly Salary: " << yearlySalary << endl;
    cout << "Gender: " << g 
         << "\nMarried: " << s << endl << "Favorite color " <<myFavoriteColor;

    return 0;
}