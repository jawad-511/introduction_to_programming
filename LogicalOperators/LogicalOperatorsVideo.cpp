#include <iostream>
using namespace std;
// && called logical AND operator. if both the operands are non-zero , then the condition becomes true.

// || called logical OR operator. if any of the two operands is non-zero the the conditions becomes true.

// ! called Logical NOT operator. use to reverses the logical state of its operand. if a condition is true the the logical NOT operetor will make it false
int main() {
    
    //  bool a = 1 , b = 0;
    

    // cout << (a && b) << endl;
    // cout << (a || b) << endl;
    // cout << !a << endl;
    // cout << !b << endl;
    // cout << !(a && b) << endl;
    // cout << !(a || b) << endl;
    bool result = (12 >=12);
    cout << result << endl; 

    result = (12 > 7);
    cout << result << endl; 

    result = 8 < 6;
    cout << result << endl; 

    result = 8 == 8;
    cout << result << endl; 

    result = 12 <= 12;
    cout << result << endl; 

    result = 7 == 5;
    cout << result << endl; 

    result = !(12 >= 12);
    cout << result << endl; 

    result = !(12 < 7);
    cout << result << endl; 

    result = !(8 < 6);
    cout << result << endl; 

    result = !(8 == 8);
    cout << result << endl; 

    result = !(12 <= 12);
    cout << result << endl; 

    result = !(7 == 5);
    cout << result << endl; 

    result = (1 && 1);
    cout << result << endl; 

    result = 1 && 0;
    cout << result << endl; 

    result = 0 || 1;
    cout << result << endl; 

    result = 0 || 0;
    cout << result << endl; 

    result = !(0);
    cout << result << endl; 

    result = (7 == 7) && (7 > 5);
    cout << result << endl; 

    result = (7 == 7) && (7 < 5);
    cout << result << endl; 

    result = (7 == 7) || (7 < 5);
    cout << result << endl; 

    result = (7 < 7) || (7 > 5);
    cout << result << endl;

    result = !((7 == 7) && (7 > 5));
    cout << result << endl;

    result = (7 == 7) && !(7 < 5);
    cout << result << endl;


    result = (5 > 6 && 7 == 7) || (1 || 0);
    cout << result << endl;

    result = !(5 > 6 && 7 == 7) || (1 || 0);
    cout << result << endl;

    result = !(5 > 6 && 7 == 7) && !(1 || 0);
    cout << result << endl;

    result = ((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && 1;
    cout << result << endl;

    result = ((5 > 6 && !(7 <= 8)) && (8 > 1) || 4 <=3) || 1;
    cout << result << endl;

    


  


    return 0;
}