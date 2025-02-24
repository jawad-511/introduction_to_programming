#include <iostream>
#include <string>
using namespace std;


int main() { 

    int num;
    string name;
    string country;

    cout << "Enter num: " << endl;
    cin >> num;

    cout << "Enter your name: " << endl;
    //cin.ignore(1, '\n');
    getline(cin, name);

    cout << "Enter your country: " << endl;
    getline(cin, country);

    cout <<"num: " << num << endl << "name: " << name << endl
    << "country: " << country << endl;



    return 0;
}