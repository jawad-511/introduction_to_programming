#include <iostream>
using namespace std;

int main()
{

    
    for(int i = 'A'; i <= 'F'; i++)
    {
        for(int j = 'A'; j <= i; j++)
        {
            cout << char(j) << " ";
        }
        cout << endl;
    }

    return 0;
}