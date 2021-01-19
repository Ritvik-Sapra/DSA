/*
1. You are given a number n.
2. You've to create a pattern of * and separated by tab as shown in output format.

Input:
5

Output:
*   *   *       *   *   *
*   *               *   *
*                       *
*   *               *   *
*   *   *       *   *   *

NOTE: This question is also available in Java.
*/

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int row;
    cin >> row;
    int col = row + 2, space = 1;
    for(int i = 0; i < row; i++) {
        int star = (col - space) / 2;
        for(int j = 0; j < star; j++)
            cout << "*\t";
        for(int j = 0; j < space; j++)
            cout << "\t";
        for(int j = 0; j < star; j++)
            cout << "*\t";
        if(i < row/2)
            space += 2;
        else
            space -= 2;
        cout << endl;
    }
}
