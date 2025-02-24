#include <iostream>
using namespace std;

void readMark(int &mark)
{

    cout << "Enter your mark\n";
    cin >> mark;

}
void checkMarks(int mark)
{

    if(mark >= 60)    
    {
        cout << "Pass\n";
    }
    else 
    {
        cout << "fail..Sorry work hard and you will success\n";
    }

}


int main()
{

    int mark;
    readMark(mark);
    checkMarks(mark);

   


    return 0;
}