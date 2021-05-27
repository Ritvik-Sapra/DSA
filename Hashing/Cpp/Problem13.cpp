/*
Winner of an election

Given an array of names (consisting of lowercase characters) of candidates 
in an election. A candidate name in array represents a vote casted to the 
candidate. Print the name of candidate that received Max votes. If there 
is tie, print lexicographically smaller name.

Example 1:

Input:
n = 13
Votes[] = {john,johnny,jackie,johnny,john 
jackie,jamie,jamie,john,johnny,jamie,
johnny,john}
Output: john 4
Explanation: john has 4 votes casted for 
him, but so does johny. john is 
lexicographically smaller, so we print 
john and the votes he received.
Example 2:

Input:
n = 3
Votes[] = {andy,blake,clark}
Output: andy 1
Explanation: All the candidates get 1 
votes each. We print andy as it is 
lexicographically smaller.
Your Task:
You only need to complete the function winner() that takes an array of 
strings arr, and n as parameters and returns the name of the candiate 
with maximum votes and the number of votes the candidate got as an array of size 2.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)
*/

//Function to return the name of candidate that received maximum votes.
vector<string> winner(string arr[], int n)
{
  // Your code here
  // Return the string containing the name and an integer
  // representing the number of votes the winning candidate got
  vector<string> answer;
  unordered_map<string, int> ump;
  for (int i = 0; i < n; i++)
    ump[arr[i]]++;
  int max_votes = -1;
  string win;
  for (auto x : ump)
  {
    if ((x.second == max_votes) && (win.compare(x.first) > 0))
    {
      win = x.first;
    }
    else if (x.second > max_votes)
    {
      max_votes = x.second;
      win = x.first;
    }
  }
  answer.push_back(win);
  answer.push_back(to_string(max_votes));
  return answer;
}
