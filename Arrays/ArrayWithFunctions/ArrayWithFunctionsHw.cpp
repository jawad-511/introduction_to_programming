#include <iostream>
using namespace std;


void readGrade(int studentsGrades[]) 
{
    cout << "Enter the first grade ? \n";
    cin >> studentsGrades[0];

    cout << "Enter the second grade ? \n";
    cin >> studentsGrades[1];

    cout << "Enter the third grade ? \n";
    cin >> studentsGrades[2];
}

float calculateAvgOfGrades(int studentsGrades[])
{

    float avg = (studentsGrades[0] + studentsGrades[1] + studentsGrades[2]) / 3.00;
    return avg;
}

//Used The pattren Divide and conquer
int main() 
{

    int grades[3];

    readGrade(grades);
    float result = calculateAvgOfGrades(grades);
    cout  << "*****************************\n";
    cout << "The average of grades is " << result << endl;


    return 0;
}
