#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int b = a++;//b will take the old value of a , then a will increase by 1


    /*b will be 10 because the calculation happend after assign a to k because it is postfix*/ 
     cout << "a: " << a <<  " b: " << b << "\n"; 


     b = ++a;//A will increase by 1 , then b will take the new value
     cout << "a: " << a <<  " b: " << b; 


     return 0;
}