#include <iostream>
using namespace std;
enum enColor{Red, Green , Yellow, Blue};
enum enGender{Male, Female};
enum enMaritalStatus{Single, Married};

struct stAddress 
{

    string streetName;
    string buildingNo;
    string poBox;
    string zipCode;

};


struct stContactInfo
{

    string phone;
    string email;
    stAddress address;

};

struct stPerson 
{
    string fullName;
    stContactInfo contactInfo;

    enGender gender;
    enColor color;
    enMaritalStatus martialStatus;

};



int main() {

    stPerson person;
    person.fullName = "jawad Khalid Alotaibi";
    person.contactInfo.phone = "0591013407";
    person.contactInfo.email = "ssa613333@gmail.com";
    person.contactInfo.address.buildingNo = "261";
    person.contactInfo.address.poBox = "11621";
    person.contactInfo.address.streetName = "Aljafali";
    person.contactInfo.address.zipCode = "111831";

    person.gender = enGender::Male;
    person.martialStatus = enMaritalStatus::Single;
    person.color = enColor::Blue;



     cout << "full name: "<<person.fullName << endl << "phone: " << person.contactInfo.phone << endl << "Gender: " << person.gender << endl << "Martial Status: " << person.martialStatus << endl
      << "Color: " << person.color;
    return 0;
}