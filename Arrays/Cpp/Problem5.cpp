/*
Given a vector 'mv', we need to complete the function reverseInGroups().
The function is given two args.: n (size of the vector) and k (pivot point to 
reverse). 

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Example:
Input
4   //no of test cases (t)
5 3     //n and k respectively (test case 1)
1 2 3 4 5   //elements of vector
4 3     //test case 2
5 6 8 9
4 7     //test case 3
5 6 8 9
8 3     //test case 4
1 2 3 4 5 6 7 8

Output
3 2 1 5 4
8 6 5 9
9 8 6 5
3 2 1 6 5 4 8 7
*/

vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
    
    for(long long i = 0;i<n;){ //iterating over all the elements
        //There can be two conditions
        //When we have k elements from our current position
        //When k elements from current elements don't exist. In such case just 
        //reverse the remaining elements
        if(i+k < n){ //If we have k elements available

        reverse(mv.begin()+i, mv.begin()+(i+k)); 
        //just reverse elements from i till i+k
        i+=k; //increment i so as to avoid problem of double reversal
        }
        else{//If we don't have k elements available
            reverse(mv.begin()+i, mv.end());  
            //Reverse from current position till end
            i+=k;
        }
    }
    
    return mv;
}