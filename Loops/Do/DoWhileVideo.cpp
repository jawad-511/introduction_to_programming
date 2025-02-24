#include <iostream>
using namespace std;

/*The core concept in Do While is 
it will execute the block inside Do one time at least even if the condition is false

*/

int readIntegerInRangeUsingDoWhile(int from, int to)
{
    int number;

    do
    {
        cout << "Please Enter number from " << from << " to " << to << endl;
        cin >> number;

    } while (number < from || number > to);

    return number;
    
}

int main()
{

    // int i = 1;
    // do
    // {
    //     /* code */
    //     cout << "Jawad Alotaibi\n";
    //     i++;
    // } while (i <= 5);
    int result =  readIntegerInRangeUsingDoWhile(18, 45);
    
    cout << "The number you enterd is: " << result;


    return 0;
}