#include <iostream>
using namespace std;

int main()
{

    // for (int i = 1; i <= 7 ; i++)
    // {
    //     cout << "i = " << i << endl;

    //     for(int j = 1; j <= 10; j++)
    //     {
    //         cout << i << " * " << j << " = " << i * j << endl;
    //     }

    //     cout << "********************************************************************\n";
    // }


    for(int i = 1; i <= 10; i++) 
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    

    return 0;
}