/*
This is a program demonstrating a recursive function that returns the value of
log with base 2, when i/p is a power of 2.

When i/p is not a power of 2, it returns floor of the value log with base 2.
*/

#include <iostream>

using namespace std;

int LogBase(int n){
    if(n < 2)
        return 0;
    else
        return (1 + LogBase(n/2));
}

int main(){
    int ip, op;
    std :: cout << "Enter the input: ";
    std :: cin >> ip;
    op = LogBase(ip);
    std :: cout << op;
}

/*
To make this function run with log of base 3, just replace 2 with 3 in the 
recursive function "LogBase()".
Hence, this is the general behaviour of this program.
*/