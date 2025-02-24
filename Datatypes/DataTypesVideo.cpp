#include <iostream> 
using namespace std;

int main() {
    //Note by-default any variable is signed means its split in +numbers or -numbers
    
    /*this takes 4 byte in memory and the last capacity this number can take is 4,000,000,000
     but because its signed it takes 2,000,000,000 for positive numbers and negative 2,000,000,000 numbers

     *note if the number is signed the last bit it will be as flag either plus sign or minus sign  
    
    */
    int v1;
    signed int v2;//v1 and v2 in this case is the same because by-default any variable is signed

    unsigned int v3;

    short v4;//can hold 32000 the last capacity and the least capacity is -32000

    unsigned short v5;// the short datatype stored in 2 bytes means 16 bit 2 ^ 16 - 1 = (unsigned 65000) if it signed will split the 65000 to positive and negative numbers
    

}