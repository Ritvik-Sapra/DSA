/*
1. You've to display the digits of a number in reverse.
2. Take as input "n", the number for which digits have to be display in reverse.
3. Print the digits of the number line-wise, but in reverse order.

Input:
65784383

Output:
3
8
3
4
8
7
5
6

Note: This question is also available in Java.
*/

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    while(n > 0) {
        cout<<n%10<<endl;
        n /= 10;
    }
}
