#include <iostream>
#include <string>
using namespace std;

int main() {
    //hw1
    string str1 = "43.22";

    double d = stod(str1);
    int i = stoi(str1);
    float f = stof(str1);

    cout << "string to double is: " << d << endl 
    << "string to integer is: " << i  << endl << "string to float is: " << f << endl << endl;

    //hw2

    int n1 = 20;
    string str2 = to_string(n1);

     double n2  = 33.5;
     string  str3 = to_string(n2);

     float n3 = 55.33;
     string str4 = to_string(n3);
     int n4 = (int) n3;
     cout << "float to integer: " << n4 << endl;

     cout << "int to string is: " << str2 << endl 
    << "double to string is: " << str3  << endl << "float to string is: " << str4 << endl << endl;


    return 0;
}