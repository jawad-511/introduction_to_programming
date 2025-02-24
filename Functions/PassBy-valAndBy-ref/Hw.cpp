#include <iostream>
using namespace std;

void swapNumbers(int &num1, int &num2) {

   
    int temp = num1;
    num1 = num2;
    num2 = temp;

   
}


int main() {

    int n1 , n2;
    cout << "enter num1: \n";
    cin >> n1;

     cout << "enter num2: \n";
    cin >> n2;

    cout << " before swap: "<< n1  << " , " << n2; 

    swapNumbers(n1 , n2);

    cout << " After swap: "<< n1  << " , " << n2; 

    return 0;
}