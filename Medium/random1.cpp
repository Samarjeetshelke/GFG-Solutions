/*
First and last occurrences of x 

banner
Given a sorted array arr containing n elements with possibly duplicate is to find indexes of first elements, the task is to find the first and last occurrences of an element x in the given array.
Note: If the number x is not found in the array then return both the indices as -1.


Example 1:

Input:
n=9, x=5
arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
Output:  
2 5
Explanation: 
First occurrence of 5 is at index 2 and last occurrence of 5 is at index 5. 
Example 2:

Input:
n=9, x=7
arr[] = { 1, 3, 5, 5, 5, 5, 7, 123, 125 }
Output:  
6 6
Explanation: 
First and last occurrence of 7 is at index 6.
Your Task:
Since, this is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function find() that takes array arr, integer n and integer x as parameters and returns the required answer.

Expected Time Complexity: O(logN)
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ N ≤ 106
1 ≤ arr[i],x ≤ 109
*/

vector<int> find(int arr[], int n , int x )
    {
        // code here
       vector<int> ans;
       
       int l=0;
       int h=n-1;
       int f=0;
       int e=0;
       
       while(l<=h){
           
           int mid=((l+h)/2);
           
           if(arr[mid]==x){
               f=e=mid;
               for(int i=mid-1;i>=0;i--){
                   if(arr[i]==x){
                       f=i;
                   }
                   else{
                       break;
                   }
                   
               }
               
               for(int i=mid+1;i<n;i++){
                   if(arr[i]==x){
                       e=i;
                   }
                   else{
                       break;
                   }
                   
               }
               ans.push_back(f);
               ans.push_back(e);
               
               
              return ans;
           }
           
           if(arr[mid]>x){
               h=mid-1;
           }
           else{
               l=mid+1;
           }
           
       }
       ans.push_back(-1);
       ans.push_back(-1);
       return ans;
        
    }
