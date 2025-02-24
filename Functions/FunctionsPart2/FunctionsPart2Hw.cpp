#include <iostream>
#include <string>
using namespace std;

void mySumProcedural() {

    int n1 , n2;
    
    cout << "Please Enter Number1? " << endl;
    cin >> n1;

    cout << "Please Enter Number2? " << endl;
    cin >> n2;

    cout << "Procedural: The sum is: " << n1 + n2 << endl << endl ;
}

int mySumFunction() {

    int n1 , n2;
    
    cout << "Please Enter Number1? " << endl;
    cin >> n1;

    cout << "Please Enter Number2? " << endl;
    cin >> n2;

    return n1 + n2;

}

int main() {

    mySumProcedural();  
    int result = mySumFunction();
    cout << "Function: The sum is: " <<  result;

    return 0;
}