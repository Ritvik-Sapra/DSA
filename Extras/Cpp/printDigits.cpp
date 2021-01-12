/*
Print the digits of a number individually.
Input:
34513

Output:
3
4
5
1
3

Note: This question is also available in the Java folder of this directory.
*/

#include <iostream>
using namespace std;

void printDigits(int n) {
    if(n == 0)  // Base case
        return;
    int d = n%10;
    printDigits(n/10);
    cout<<d<<endl;
}

int main(int argc, char **argv){
    int n;
    cin >> n;
    printDigits(n);
    return 0;
}
