#include <iostream>
using namespace std;

void readArrayData(int arr[] , int &length)
{
    cout << "How many numbers do you want to enter ? 1 to 100?\n";
    cin >> length;

    for(int i = 0; i <= length - 1 ; i++)
    {
        cout << "Please Enter Number " << i + 1 << endl;
        cin >> arr[i];
    }
}

void printArrayData(int arr[] ,int length)
{
    cout << endl;
    for(int i = 0; i <= length -1; i++)
    {
        cout << "Number ["<<i+1<<"] " << arr[i] << endl;
    }
}

int calculateSumOfTheArray(int arr[], int length)
{
    int sum = 0;
    for(int i = 0; i < length; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

float calculatAveageOfTheArray(int arr[] , int length)
{
    float sum = calculateSumOfTheArray(arr, length);
    return sum / length;
}

int main()
{
    int arr1[100] , length = 0;
    readArrayData(arr1 , length);
    printArrayData(arr1, length);

    int sum = calculateSumOfTheArray(arr1, length);
    cout << "************************\n";
    cout << "Sum = " << sum << endl;
    cout << "Avg = " << sum / length << endl;


    return 0;
}