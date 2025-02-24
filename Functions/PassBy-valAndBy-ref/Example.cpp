#include <iostream>
#include <string>

//using namespace std;

int main() 
{
    int a = 511;
    int &x = a;

    std::cout << "The Address of a is: " << &a << std::endl;
    std::cout << "The Address of x is: " << &x << std::endl;

    std::cout << "The Value of a is: " << a << std::endl;
    std::cout << "The Value of x is: " << x  << std::endl;


    return 0;
}