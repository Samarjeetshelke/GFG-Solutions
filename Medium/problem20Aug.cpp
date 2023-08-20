/*
Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr.

Example 1:

Input:
N = 7, X = 2
Arr[] = {1, 1, 2, 2, 2, 2, 3}
Output: 4
Explanation: 2 occurs 4 times in the
given array.
Example 2:

Input:
N = 7, X = 4
Arr[] = {1, 1, 2, 2, 2, 2, 3}
Output: 0
Explanation: 4 is not present in the
given array.
Your Task:
You don't need to read input or print anything. Your task is to complete the function count() which takes the array of integers arr, n, and x as parameters and returns an integer denoting the answer.
If x is not present in the array (arr) then return 0.

Expected Time Complexity: O(logN)
Expected Auxiliary Space: O(1)

*/

//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	   /* int count=0;// the easy and most common answer is this wiht complexity of O(N)
	    
	    for(int i=0;i<n;i++){
	        if(x==arr[i]){
	            count++;
	        }
	    }
	    
	    return count;
	}*/
	
	    map<int,int> mp;
	
	    for(int i=0;i<n;i++){
	        mp[arr[i]]++;
	    }
	
	    for(auto y:mp){
	        if(y.first==x)
	            return y.second;
	    }
	    
	    return 0;
	}
};
