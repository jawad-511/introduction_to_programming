#include <iostream>
#include <cmath>
using namespace std;
int power(int a , int m);


int main() {

    int a , m;

    cout << "enter a: \n";
    cin >> a;

    cout << "enter m: \n";
    cin >> m;


    int result = power(a , m);
    cout << "power a ^ m =  " << result;

    return 0;
}


int power(int a , int m)
{
    
    return pow(a, m);
    
}
