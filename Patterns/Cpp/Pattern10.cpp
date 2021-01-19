/*
Print the following pattern.

Input:
5

Output:


		*	
	*		*	
*				*	
	*		*	
		*	

NOTE: This question is also avalable in Java.
*/

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int outer_space = n/2, inner_space = -1;
    for(int i = 0; i < n; i++) {
        // Outer space
        for(int j = 0; j < outer_space; j++)
            cout << "\t";
        cout << "*\t";
        // Inner space
        if(inner_space > 0) {
            for(int j = 0; j < inner_space; j++)
                cout << "\t";
            cout << "*\t";
        }
        if(i < n/2) {
            outer_space -= 1;
            inner_space += 2;
        }
        else {
            outer_space += 1;
            inner_space -= 2;
        }
        cout << endl;
    }
}
