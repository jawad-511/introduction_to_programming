#include <iostream>
using namespace std;

void readAge(int &age)
{
    cout << "Enter your age\n";
    cin >> age;
}

void checkAge(int age)
{
    if(age >= 18 && age <= 45)
    {
     cout <<"Valid age\n";
    }
    else 
    {
     cout << "Invalid age\n";
    }
}
int main()
{

   int age;
   readAge(age);
   checkAge(age);

   

   


    return 0;
}