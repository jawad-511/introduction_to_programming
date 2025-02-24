#include <iostream>
#include <string>
using namespace std;

int main() {

    string myString = "Jawad";//strings are array of characters
    cout << "The Length of my string is: " << myString.length() << endl;

    cout << "Print the last letter: " << myString[4] << endl << endl;//because its an array we start indexing from 0 the last is 4

    string s1 = "10" , s2 = "20";

    string s3 = s1 + s2;
    cout << "The sum before casting is: " << s3 << endl;

    int sum = stoi(s1) + stoi(s2);
    cout << "the sum of to strings after casting is: " << sum;

    return 0;
}
