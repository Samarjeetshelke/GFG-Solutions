/


void printCorner(Node *root)
{

// Your code goes here
    queue<Node *>q;
    q.push(root);
    
    while(!q.empty()){
        int n=q.size();
        
        for(int i=0;i<n;i++){
            Node * s=q.front();
            if(i==0||i==n-1){
                cout<<s->data<<" ";
            }
            if(s->left!=NULL){
                q.push(s->left);
            }
            if(s->right!=NULL){
                q.push(s->right);
            }
            q.pop();
        }
    }

}
