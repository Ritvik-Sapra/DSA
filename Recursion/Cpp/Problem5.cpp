/*
This program depicts recursive function t check if a string is Palindrome or not.
This program keeps running untill user wants.
*/


#include <iostream>
#include <cstring>

using namespace std;

bool isPalindrome(string &str, int start, int end){     //Recursive Function
    if(start >= end)
        return true;
    return ((str[start] == str[end]) && (isPalindrome(str, start + 1, end - 1)));
}

int main(){
    char ch = 'Y';
    string str;
    do{
        cout << endl << "Enter the string to be checked: " << endl;
        cin>>str;
        int l = str.length();
        if(isPalindrome(str, 0, l - 1))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        cout << "Do you wish to continue? (Y/N): ";
        cin >> ch;
    } while((ch == 'y') || (ch == 'Y'));
    return 0;
}