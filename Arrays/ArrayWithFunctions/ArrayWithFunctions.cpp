#include <iostream>
using namespace std;

void readArrayData(int  x[])
{


cout << "Enter The frist number: \n";
cin >> x[0];

cout << "Enter The second number: \n";
cin >> x[1];

cout << "Enter The third number: \n";
cin >> x[2];

}

void printArrayData(int x[])
{
    cout << "******************************************************\n";
    cout << "The first number is: " << x[0] << endl;
    cout << "The second number is: " << x[1] << endl;
    cout << "The third number is: " << x[2] << endl;
}


int main()
{

    int x[3];

    readArrayData(x);
    printArrayData(x);

    return 0;
}