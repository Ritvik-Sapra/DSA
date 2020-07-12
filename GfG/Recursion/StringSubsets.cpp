/*
Recursive solution to print all the subsets in a string.

Logic:

We start with an empty string. Then we have, two options, either append the 
letter at the index or NOT append. At the end of the base, we have all the 
possible subsets. We display the string curr at the bottom most leaf.

                          ""                 <--curr
                  /               \                    <--index 0
                /                  \
               ""                   "A"
            /      \              /       \             <--index 1
          /         \            /         \
        ""          "B"         "A"        "AB"
      /    \        / \         /  \       /   \        <--index 2
     /      \      /   \       /    \     /     \
    ""      "C"   "B"  "BC"   "A"  "AC"  "AB"   "ABC"   <--index 3

We call the function
*/

#include <bits/stdc++.h> 

using namespace std;

void printSub(string str, string curr = "", int index = 0){
    
    if(index == str.length()){  //base case; when str is ended
        cout<<curr<<" ";
        return;
    }
    printSub(str, curr + str[index], index + 1);    
            //recursive call t include character
    printSub(str, curr, index + 1);
            //recursive call without adding character
    
}

int main() {
    string str;
    cin>>str;
	printSub(str);
	return 0;
}