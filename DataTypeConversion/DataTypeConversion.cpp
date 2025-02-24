#include <iostream>
#include <string>
using namespace std;

int  main() {

//     int num1;
//     double num2 = 18.77;

//     //num1 = num2;//implicit conversion from double to int

//     num1 = (int) num2;

//    num1 = int(num2);

//     cout << num1 << endl;

    // //convert string to number
    // string str = "123.456";

    // //convert string to int
    // int int_num = stoi(str);//123

    // //convert string to float;

    // float float_num = stof(str);//123,456

    // //convert from string to double
    // double double_num = stod(str);

    // cout << "num_int = " << int_num << endl;
    // cout << "float_int = " << float_num << endl;
    // cout << "double_int = " << double_num << endl;

    //convert number to string
    int num1 = 511;
    double num2 = 18.99;

    string s1, s2;

    s1 = to_string(num1);
    s2 = to_string(num2);

    cout << "s1: " << s1 << endl << "s2: " << s2; 

    return 0;
}