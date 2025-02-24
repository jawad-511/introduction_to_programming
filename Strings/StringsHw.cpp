#include <iostream>
#include <string>
using namespace std;

int main() {

    string string1;
    cout << "Please Enter string1?: " <<endl;
    getline(cin, string1);

    string string2;
    cout << "Please Enter string2?: " <<endl;
    getline(cin, string2);

    string string3;
    cout << "Please Enter string3?: " <<endl;
    getline(cin, string3);

    cout << "************************************" << endl;

    cout << "The length of string1 is: " << string1.length() << endl;
    cout << "charachters at 0,2,6,7 are: " << string1[0] << " " << string1[2] << " " << string1[4] 
    << " " <<string1[7] << endl;
    cout << "concatenating string2 and string3 = " << string2 + string3 <<endl;
    cout << string2 <<" * " <<  string3 <<" = "  << stoi(string2) * stoi(string3) << endl;      

    return 0;
}