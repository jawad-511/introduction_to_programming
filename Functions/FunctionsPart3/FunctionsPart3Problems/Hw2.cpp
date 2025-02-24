#include <iostream>
using namespace std;

void swapNumbers(int n1, int n2) {

   // cout << "Before swap: "<< n1  << " , " << n2; 
    int temp = n1;
    n1 = n2;
    n2 = temp;

    //cout << " After swap: "<< n1  << " , " << n2; 
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