/*
Given arrival and departure times of all trains that reach a railway station. 
Your task is to find the minimum number of platforms required for the railway 
station so that no train waits.
Note: Consider that all the trains arrive on the same day and leave on the same 
day. Also, arrival and departure times will not be same for a train, but we can 
have arrival time of one train equal to departure of the other.
In such cases, we need different platforms, i.e at any given instance of time, 
same platform can not be used for both departure of a train and arrival of another.

Input: N = 6 
arr[] = [0900  0940 0950  1100 1500 1800]
dep[] = [0910 1200 1120 1130 1900 2000]
Output: 3
Explanation: 
Minimum 3 platforms are required to 
safely arrive and depart all trains.

Input: N = 3
arr[] = [0900 1100 1235]
dep[] = [1000 1200 1240] 
Output: 1
Explanation: Only 1 platform is required to 
safely manage the arrival and departure 
of all trains. 

Expected Time Complexity: O(nLogn).
Expected Auxiliary Space: O(n).

NOTE: This problem is similar and is also known as "Meeting maximum no. of 
guests at a party". The logic and code will be exactly same in that as well.
*/

int findPlatform(int arr[], int dep[], int n)
{
	sort(arr, arr+n);
	sort(dep, dep+n);
	int i=1, j=0, res=1, count=1;
	while(i<n && j<n) {
	    if(arr[i]<=dep[j]) { count++; i++; }
	    else { count--; j++; }
	    res = max(res, count);
	}
	return res;
}
