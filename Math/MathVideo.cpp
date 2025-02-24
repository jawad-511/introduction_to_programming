#include <iostream>
#include <cmath>

using namespace std;

int main() {

    //square root(sqrt) function
    double x = 64;
    cout << "The squre root for 64 = " << sqrt(x) << endl; //gives 8
    cout << "The square root for 50 = " << sqrt(50) << endl << endl << endl; // gives 7.07107

    //round function
    cout << "The round for 2.4 = " << round(2.4) << endl;//2
    cout << "The round for 2.5 = " << round(2.5) << endl;//3
    cout << "The round for 2.7 = " << round(2.7) << endl;//3
    cout << "Round of 2.4 + round of 5.6 = " << round(2.4) + round(5.6) << endl;//8

    cout << "the round for square root 50 = " << round(sqrt(50)) << endl << endl << endl;

    //power(pow) function

    int z = 2, y = 4; 

    cout << "The 2 to the power of 4 = " << pow(z , y) << endl;  //16
    cout << "4 to the power of 3 = " << pow(4, 3) << endl << endl << endl;//64

    //celi function & floor function
    cout << "ceiling for 3.1 = " << ceil(3.1) << endl;//4
    cout << "flooring for 3.9 = " << floor(3.9) << endl;//3

    //absloute(abs) function

    cout << "The absloute value of -511 = " << abs(-511) << endl;
    cout << "The absloute value of 511 = " << abs(511) << endl;


    return 0;
}
