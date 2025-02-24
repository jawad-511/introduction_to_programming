#include <iostream>
using namespace std;

enum enScreenColors{Red = 1, Blue = 2 , Green = 3, Yellow = 4};


int main()
{
    cout << "**********************************************\n";
    cout << "Please choose the number of your color\n";
    cout << "(1) Red\n";
    cout << "(2) Blue\n";
    cout << "(3) Green\n";
    cout << "(4) Yellow\n";

    int c;
    enScreenColors color;
    cout << "Yoyr choice ?\n";
    cin >> c;
    color = (enScreenColors) c;

    if(color == enScreenColors::Red)
    {
        system("color 4F");
    }
    else if(color == enScreenColors::Blue)
    {
        system("color 1F");
    }
    else if(color == enScreenColors::Green)
    {
        system("color 2F");
    }
    else if(color == enScreenColors::Yellow)
    {
        system("color 6F");
    }
    else
    {
        system("color 9f");
    }



    return 0;
}