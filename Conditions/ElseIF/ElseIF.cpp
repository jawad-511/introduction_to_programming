#include <iostream>
using namespace std;

int main()
{

    int time = 14;

    if(time < 10)
    {
        cout << "Good Morning.\n";
    }

    else if(time >= 10 && time < 20)
    {
        cout << "Good day.\n";
    }

    else
    {
        cout << "Good evening.\n";
    }

    return 0;
}