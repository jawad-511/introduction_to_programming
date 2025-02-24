#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int searchFor = 20;

    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if(arr[i] == searchFor)
        {
            cout << "Found 20 in index " << i << endl;
            break;
        }

        cout << arr[i] << endl;
    }

    cout << "Outside the loop\n";
    return 0;
}