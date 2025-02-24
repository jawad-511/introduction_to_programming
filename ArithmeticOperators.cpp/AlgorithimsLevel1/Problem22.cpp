 #include <iostream>
using namespace std;
const float PI = 3.14;
int main() {

   float a , b;
   cout << "Please enter a: \n";
   cin >> a;

   cout << "Please enter b: \n";
   cin >> b;

   float circleArea = (PI * b * b / 4) * ((2 * a - b) / (2 * a + b));
   cout << "The Area is: " << circleArea;


    return 0;
}