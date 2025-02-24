#include <iostream>
using namespace std;

int main()
{

    for(int i = 'A'; i <= 'Z'; i++)
    {
        cout << "i = " << char(i) << endl;
        for(int j = 'A'; j <= 'Z'; j++)
        {
            cout << char(i) << char(j) << endl;
        }
        cout << "******************************************\n";
    }

    return 0;
}