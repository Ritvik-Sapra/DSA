/*
WAP to remove duplicate words from a string, which is a sentence.
For e.g.:
Input:
Geeks for Geeks

Output:
Geeks for
*/

#include <bits/stdc++.h> 
using namespace std; 
  
void removeDupWord(string str) 
{ 
    // Used to split string around spaces. 
    istringstream ss(str); 
  
    // To store individual visited words 
    unordered_set<string> hsh; 
  
    // Traverse through all words 
    do
    { 
        string word; 
        ss >> word; 
  
        // If current word is not seen before. 
        while (hsh.find(word) == hsh.end()) { 
            cout << word << " "; 
            hsh.insert(word); 
        } 
  
    } while (ss); 
} 
  
// Driver function 
int main() 
{ 
    string str; 
    getline(cin, str);
    removeDupWord(str); 
    return 0; 
} 