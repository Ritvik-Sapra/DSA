#include <bits/stdc++.h>

using namespace std;

int R, C;

int main() {
    cout<<"Enter the row size of the matrix: ";
    cin>>R;
    cout<<"\nEnter the column size of the matrix: ";
    cin>>C;
    int arr[R][C];
    cout<<"\nEnter elements of the array (only 0s and 1s)"<<endl;
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cin>>arr[i][j];
        }
    }
    int i = 0, j = 0, dir = 0;
    while(true) {
        dir = (dir + arr[i][j]) % 4;

        if(dir == 0) {
            j++;
        }
        else if (dir == 1) {
            i++;
        }
        else if (dir == 2) {
            j--;
        } 
        else if (dir == 3) {
            i--;
        }

        if(i < 0) {
            i++;
            break;
        }
        else if (j < 0) {
            j++;
            break;
        }
        else if (i == R) {
            i--;
            break;
        }
        else if (j == C) {
            j--;
            break;
        }
    }
    cout<<"Exit point: "<<i<<", "<<j<<endl;
}