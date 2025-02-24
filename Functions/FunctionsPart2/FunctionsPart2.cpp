#include <iostream>
#include <string>
using namespace std;

void myProcedural() { // its a procedural because it dosen't return a value

    cout << "This is not the first Procedural executed!\n";

}


string myFunction() { // its a function because it's return a value


    return "This is my first returning value from a function";

}

int myFunction3() {

    int x = 10;
    int y = 20;

    return x + y;
}


int main() { 

    myProcedural();
    //string returnValue = myFunction();
    int result = myFunction3() + 30;
    cout <<  myFunction() ;
    cout << endl << result;


    return 0;
}