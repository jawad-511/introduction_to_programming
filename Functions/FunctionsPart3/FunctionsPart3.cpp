#include <iostream>
#include <string>
using namespace std;

/*we used parameter because function is like process
 recieve a value do some calculation and retrun a value. Unlike Procedur can read from user and print inside the procedur*/
int mySumFunction(int n1, int n2) {

    int sum = n1 + n2;
    return sum;
}

int main() {

    int res = mySumFunction(10, 10);
    cout << "sum is: " << res;
    return 0;
}