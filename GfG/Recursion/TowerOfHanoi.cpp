/*
The algo contains mainly three steps:

1) Recursively call function with A as source, B as destination and 
C as auxilary tower

2) Print "move ${n} from ${source} to ${destination} "

3) Recursively call function with B as source, C as destination and 
A as auxilary tower

The basic structure of the function is TOH(number, source, aux, destnation)
*/

#include <bits/stdc++.h>

using namespace std;

void TOH(int n, char A = 'A', char B ='B', char C ='C'){    //TOH function
    if(n == 1){
        cout<<"Move 1 from "<<A<<" to "<<C<<endl;
        return;
    }
    TOH(n-1, A, C, B);
    cout<<"Move "<<n<<" from "<<A<<" to "<<C<<endl;
    TOH(n-1, B, A, C);
}

int main(){
    int n;
    cout<<"Enter the no. of discs: ";
    cin>>n;
    TOH(n);
    return 0;
}