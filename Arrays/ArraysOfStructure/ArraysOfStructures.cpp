#include <iostream>
using namespace std;

struct strInfo
{
    string firstName;
    string lastName;
    int age;
    string phone;
};

int main() 
{
    strInfo person[2];
    
    person[0].firstName = "Jawad";
    person[0].lastName = "Alotaibi";
    person[0].age = 21;
    person[0].phone = "0591013407";

    person[1].firstName = "Norah";
    person[1].lastName = "Alotaibi";
    person[1].age = 40;
    person[1].phone = "0533333353";

    cout << person[1].firstName << " " << person[1].lastName << " " << person[1].age;



    return 0;
}