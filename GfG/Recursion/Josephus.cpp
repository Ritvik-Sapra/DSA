#include <bits/stdc++.h>

using namespace std;

int josephus(int n, int k){
    if(n == 1)
        return 0;
    return ((k + josephus(n - 1, k)) % n);
}

int main(){
    int n, k;
    cout<<"Enter the number n for the problem: ";
    cin>>n;
    cout<<"\nEnter the K-th position person to be killed: ";
    cin>>k;
    cout<<"\nPerson at index "<<josephus(n, k)<<" is the survivor!"<<endl;
    return 0;
}