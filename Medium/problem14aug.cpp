/*
Given an array A containing 2*N+2 positive numbers, out of which 2*N numbers exist in pairs whereas the other two number occur exactly once and are distinct. Find the other two numbers. Return in increasing order.

Example 1:

Input: 
N = 2
arr[] = {1, 2, 3, 2, 1, 4}
Output:
3 4 
Explanation:
3 and 4 occur exactly once.
*/

class Solution   
{
public:
   
     vector<int> singleNumber(vector<int> nums)
    {
         vector<int> ans;
         map<int,int> m;
         
         for(int x:nums){
             m[x]++;
         }
         
         for(auto x:m){
             if(x.second==1){
                 ans.push_back(x.first);
             }
         }
         
         return ans;
    }
};
