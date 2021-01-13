/*1. You are required to check if a given set of numbers is a valid pythagorean triplet.
2. Take as input three numbers a, b and c.
3. Print true if they can form a pythagorean triplet and false otherwise.

Input:
5 4 3

Output:
true

Note: This program is also available in Java.
*/

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int a,b,c;
    bool flag;
    cin >> a >> b >> c;
    int max = a;
    if(b >= max)
        max = b;
    if(c >= max)
        max = c;
    if(max == a) {
        flag = ((b*b + c*c) == a*a);
    }
    else if(max == b) {
        flag = ((a*a + c*c) == b*b);
    }
    else {
        flag = ((a*a + b*b) == c*c);
    }
    if(flag)
        cout<<"true";
    else
        cout<<"false";
}
