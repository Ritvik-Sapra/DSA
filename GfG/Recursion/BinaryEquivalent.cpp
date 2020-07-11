/*
This is a complete program that uses a recursive function: BinaryEquivalent()
to print the Binary representation of a given input.

This demonstrate the basic use cases of recursion.
*/

#include <iostream>

using namespace std;

void BinaryEquivalent(int n){  //Recursive function
    if(n == 0)
        return;
    BinaryEquivalent(n/2);
    std :: cout << n%2 << " ";
}

int main(){
    int ip;
    cout<<"Enter the number whose Binary equivalent should be printed";
    cin>>ip;    //Taking input (i/p)
    BinaryEquivalent(ip);

    return 0;
}