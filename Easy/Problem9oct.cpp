/*
Height of Binary Tree

Given a binary tree, find its height.

Example 1:

Input:
     1
    /  \
   2    3
Output: 2
Example 2:

Input:
  2
   \
    1
   /
 3
Output: 3   
Your Task:
You don't need to read input or print anything. Your task is to complete the function height() which takes root node of the tree as input parameter and returns an integer denoting the height of the tree. If the tree is empty, return 0. 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 <= Number of nodes <= 105
1 <= Data of a node <= 109

*/
class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        int dep=0;
        queue<Node*> q;
        q.push(node);
        q.push(NULL);
        
        while(!q.empty()){
            Node * temp=q.front();
            q.pop();
            
            if(temp==NULL){
                dep++;
            }
            
            
            if(temp!=NULL){
                if(temp->left != NULL){
                    q.push(temp->left);
                }
                if(temp->right != NULL){
                    q.push(temp->right);
                }
                
            }else if(!q.empty()){
                q.push(NULL);
            }
        }
        
        return dep;
    }
};
