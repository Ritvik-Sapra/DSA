/*
Sorting Elements of an Array by Frequency
Given an array of integers, sort the array according to 
frequency of elements. That is elements that have higher frequency 
come first. If frequencies of two elements are same, then smaller 
number comes first.

Example 1:

Input:
N = 5
A[] = {5,5,4,6,4}
Output: 4 4 5 5 6
Explanation: The highest frequency here is
2. Both 5 and 4 have that frequency. Now
since the frequencies are same then 
smallerelement comes first. So 4 4 comes 
firstthen comes 5 5. Finally comes 6.
The output is 4 4 5 5 6.
Example 2:

Input:
N = 5
A[] = {9,9,9,2,5}
Output: 9 9 9 2 5
Explanation: The highest frequency here is
3. The element 9 has the highest frequency
So 9 9 9 comes first. Now both 2 and 5
have same frequency. So we print smaller
element first.
The output is 9 9 9 2 5.
Your Task:

You only need to complete the function sortByFreq that takes arr, 
and n as parameters and returns the sorted array.

Expected Time Complexity: O(NLogN).
Expected Auxiliary Space: O(N). 
*/

class Solution
{
public:
  //Complete this function
  //Function to sort the array according to frequency of elements.
  unordered_map<int, int> m;

  //Function used in sorting vector elements first according to frequency
  //and if it is same for both values, then smaller number comes first.
  static bool sortByVal(const pair<int, int> &a, const pair<int, int> &b)
  {
    if (a.second == b.second)
      return a.first < b.first;

    return a.second > b.second;
  }

  //Function to sort the array according to frequency of elements.
  vector<int> sortByFreq(int arr[], int n)
  {

    vector<pair<int, int>> v;

    //using map to keep count of the elements.
    for (int i = 0; i < n; i++)
    {
      m[arr[i]]++;
    }

    //copying the elements and their count from map to vector.
    copy(m.begin(), m.end(), back_inserter(v));

    //sorting the vector according to frequency.
    sort(v.begin(), v.end(), sortByVal);
    vector<int> ans;

    for (int i = 0; i < v.size(); i++)
    {
      //storing elements as many times as their count in output vector.
      for (int j = 0; j < v[i].second; j++)
      {
        ans.push_back(v[i].first);
      }
    }
    m.clear();

    //returning the output.
    return ans;
  }
};
