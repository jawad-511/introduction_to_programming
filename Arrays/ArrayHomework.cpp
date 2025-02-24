#include  <iostream>
using namespace std;


int main()
{

    float grades[3];

    cout << "Enter The First Grade ? \n"; 
    cin >> grades[0];

    cout << "Enter The Second Grade ? \n"; 
    cin >> grades[1];

    cout << "Enter The Third Grade ? \n"; 
    cin >> grades[2];

    float avg = (grades[0] + grades[1] + grades[2]) / 3;

    cout << "****************************************************" << endl;
    cout << "The average of grades is " << avg;

    return 0;
}