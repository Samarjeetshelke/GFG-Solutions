/*

Given an unsorted array A of size N that contains only positive integers, find a continuous sub-array that adds to a given number S and return the left and right index(1-based indexing) of that subarray.

In case of multiple subarrays, return the subarray indexes which come first on moving from left to right.

Note:- You have to return an ArrayList consisting of two elements left and right. In case no such subarray exists return an array consisting of element -1.

Example 1:

Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements 
from 2nd position to 4th position 
is 12.
Example 2:

Input:
N = 10, S = 15
A[] = {1,2,3,4,5,6,7,8,9,10}
Output: 1 5
Explanation: The sum of elements 
from 1st position to 5th position
is 15.
Your Task:
You don't need to read input or print anything. The task is to complete the function subarraySum() which takes arr, N, and S as input parameters and returns an ArrayList containing the starting and ending positions of the first such occurring subarray from the left where sum equals to S. The two indexes in the array should be according to 1-based indexing. If no such subarray is found, return an array consisting of only one element that is -1.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 105
1 <= Ai <= 109
0<= S <= 109



*/


vector<int> subarraySum(vector<int>arr, int n, long long s)
{


            long long int sum=0;
                  vector<int> v;
                  
                 /* for(int i=0;i<n;i++){//this approach is right but our complexity is O(N^2) AND we want O(N)
                      sum=0;
                      for(int j=i;j<n;j++){
                          sum+=arr[j];
                          
                          
                              if(sum==s){
                                  v.push_back(i+1);
                                  v.push_back(j+1);
                                  return v;
                              }
                              
                              if(sum>s){
                                  break;   
                              }
                      }
                      
                     
                  }
                  
                   v.push_back(-1);
                   return v;*/
                   
                   int left=0;////this following  approaches are right and our complexity is O(N)
                   
                   for(int right=0;right<n;right++){
                       sum+=arr[right];
            
                     
                      /*while(s<sum){
                           sum-=arr[left];
                           left++;
                       }
                       */
                       if(sum>s){
                           while(sum>s){
                               sum-=arr[left];
                               left++;
                           }
                       }
                       
                        if(sum==s&&sum!=0){
                           v.push_back(left+1);
                           v.push_back(right+1);
                           return v;
                       }
                       
                       
                   }
                   
                   v.push_back(-1);
                   return v;
              }
                   /*
                   
                  int i = 0, j = 0;
             
                  bool present = false;
                  while(j < n)
                  {
                      sum = sum + arr[j];
                      if(sum > s)
                      {
                          while(sum > s)
                          {
                              sum = sum - arr[i];
                              i++;
                          }
                      }
                      if(sum == s && sum != 0)
                      {
                          present = true;
                          break;
                      }
                      j++;
                  }
                  if(present == false)
                      return {-1};
                  return {i+1,j+1};
              }*/
}
