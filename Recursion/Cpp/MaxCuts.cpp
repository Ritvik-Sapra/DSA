/*
This is a rope of length n is given. And three numbers, a, b, c are given. 
We need to find the maximum combination that a, b, c can make cuts in the rope. 
For e.g.
I/p: n = 23, a=11, b=9, c=12
O/p: 2 {using a and c}

I/p: n=5, a=2, b=5, c=1
O/p: 5 {using 5 times c}

I/p: n=5. a=4, b=2, c=6
O/p: -1 {no combi possible}

The logic is to test for every a, b and c.
Time Complexity: O(3^n)

This is not an efficient solution, better solution using DP can be found.
However, we need to use recursion in that as well. This is more of like an exercie.
*/


#include <iostream>

using namespace std;

int max(int x, int y, int z){   //function to find maximum of three values
    if((x>=y)&&(x>=z))
        return x;
    else if((y>x)&&(y>=z))
        return y;
    else 
        return z;
}

int maxCuts(int n, int a, int b, int c){
    if(n == 0)
        return 0;
    
    if(n < 0)
        return -1;
    //Above two if-conditions are base cases
    int res = max(maxCuts(n - a, a, b, c), maxCuts(n - b, a, b, c), 
            maxCuts(n - c, a, b, c));

    if(res == -1)
        return -1;
    return (res + 1);
}

int main(){
    int n, a, b, c;
    cin>>n; //inputs
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<maxCuts(n, a, b, c);
    
    return 0;
}