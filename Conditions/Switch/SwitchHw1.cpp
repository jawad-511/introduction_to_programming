#include <iostream>
using namespace std;

int main()
{

    int n1, n2;
    char operationType;

    cout << "Enter Number 1\n";
    cin >> n1;

    cout << "Enter Number 2\n";
    cin >> n2;

    cout << "Enter Operation Type (+ , - , * , /)\n";
    cin >> operationType;

    switch (operationType)
    {

    case '+':
        cout << n1 + n2 << endl;
        break;

    case '-':

        cout << n1 - n2 << endl;
        break;

    case '*':

        cout << n1 * n2 << endl;
        break;

    case '/':

        cout << n1 / n2 << endl;
        break;
    }

    return 0;
}