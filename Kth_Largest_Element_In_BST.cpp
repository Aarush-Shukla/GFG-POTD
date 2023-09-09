  void inorder(Node*root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
    
    int kthLargest(Node *root, int K)
    {
       vector<int> ans;
       inorder(root,ans);
       reverse(ans.begin(),ans.end());
       return ans[K-1];
       
       
    }
