/*
Binary Tree to BST
Given a Binary Tree, convert it to Binary Search Tree in such a way that keeps the original structure of Binary Tree intact.
 Example 1:

Input:
      1
    /   \
   2     3
Output: 
1 2 3
Explanation:
The converted BST will be 
      2
    /   \
   1     3

Example 2:

Input:
          1
       /    \
     2       3
   /        
 4       
Output: 
1 2 3 4
Explanation:
The converted BST will be

        3
      /   \
    2     4
  /
 1
Your Task:
You don't need to read input or print anything. Your task is to complete the function binaryTreeToBST() which takes the root of the Binary tree as input and returns the root of the BST. The driver code will print inorder traversal of the converted BST.

Expected Time Complexity: O(NLogN).
Expected Auxiliary Space: O(N).

Constraints:
1 <= Number of nodes <= 105
*/


class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    
    vector<int> data;
    void inorderT(Node * root){
         if(root==NULL){
             return;
         }
         inorderT(root->left);
         data.push_back(root->data);
         inorderT(root->right);
         
     }
     

     
     int index;
     
     void ToBST(Node* node, vector<int>& arr) {
        if (node == NULL)
            return;
        
        ToBST(node->left, arr);
        node->data = arr[index++];
        ToBST(node->right, arr);
    }
    
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        if(root==NULL) return NULL;
        
        inorderT(root);
       
        sort(data.begin(),data.end());
        
       index=0;
       ToBST(root,data);
        return root;
       
        
    }
};
