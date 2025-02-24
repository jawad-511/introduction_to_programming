#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.14;

int main() {

    float diameter;
    cout << "Enter the diameter" << endl;
    cin >> diameter;

    float area =  (PI * pow(diameter,2)) / (4);
    cout << "The area is: " << ceil(area);


    return 0;
}