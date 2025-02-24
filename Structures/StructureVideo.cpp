#include <iostream>
using namespace std;


struct Address {

    string street;
    short poBox;
};

struct CarOwner {

    string name;
    string phone;
    Address ownerAddress;

};

struct Car {


    string brand;
    string model;
    short year;
    CarOwner owner;


};

int main() {

    Car myCar1 , myCar2 , x;

    myCar1.brand = "Hundai";
    myCar1.model = "i10";
    myCar1.year = 2016;
    myCar1.owner.name = "Jawad";
    myCar1.owner.phone = "0557508633";
    cout << "Please Enter your address\n";
    getline(cin , myCar1.owner.ownerAddress.street);
    cout << "Please Enter your PoBox\n";
    cin >> myCar1.owner.ownerAddress.poBox;


    cout <<"The owner name is: " << myCar1.owner.name << "\nOwner Phone number is: " << myCar1.owner.phone << endl  << "The brand is: " << myCar1.brand << endl << "The Year is: " << myCar1.year << endl << "The model is: " << myCar1.model <<endl << endl; 
    cout << "The owner Address is: " << myCar1.owner.ownerAddress.street << endl << "The owner poBox is: " << myCar1.owner.ownerAddress.poBox;

    return 0;
}