class Solution{
  public:
  
void inorder(Node *root,vector<Node*>&v)
    {
        if(root==NULL)
        return;
        
        inorder(root->left,v);
        v.push_back(root);
        inorder(root->right,v);
    }

  
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        
        vector<Node*>v;
        inorder(root,v);
        
        //Node* temp;
        
        for(int i=0;i<v.size();i++)
        {
             if(v[i]==x && i!=(v.size()-1)) return v[i+1];
        }
        return NULL;
        
    }
};
