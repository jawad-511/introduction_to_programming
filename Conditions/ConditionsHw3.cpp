#include <iostream>
#include <cmath>
using namespace std;

void readMarks(int &mark1 , int &mark2, int &mark3)
{
    cout << "Enter the first mark\n";
   cin >> mark1;

   cout << "Enter the second mark\n";
   cin >> mark2;

   cout << "Enter the third mark\n";
   cin >> mark3;

}

int calculateAverageOfMarks(int mark1 ,int mark2 , int mark3)
{
    int avg = ceil((mark1 + mark2 + mark3) / 3);
   cout << "Average = " << avg << endl;
   return avg;

}

void checkMarks(int avg)
{
    if(avg >= 60)
    {
     cout << "Pass\n";
    }
    else
    {
     cout << "Fail\n";
    }
}

int main()
{

   int mark1 , mark2 ,mark3;
   readMarks(mark1, mark2 ,mark3);
   int markAverage = calculateAverageOfMarks(mark1, mark2 , mark3);
   checkMarks(markAverage);


   
   

    return 0;
}