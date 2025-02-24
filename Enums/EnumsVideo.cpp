#include <iostream>
using namespace std;
enum Color{Red, Green, Blue};
enum Direction{North ,South, West, East};
enum Week{Sat , Sun , Mon , Tus , Wed, Thu, Fri};
enum Gender{Male, Female};
enum Status {Single, Married};

int main() {
    
    Color c;
    Direction d;
    Week w;
    Gender g;
    Status s;

    c = Color::Blue;
    d = Direction::North;
    w = Week::Thu;
    g = Gender::Male;
    s = Status::Single;

    cout << 
    return 0;
}