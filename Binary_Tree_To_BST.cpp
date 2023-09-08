   vector<int> inOrder;
    int i=0;
    void inorder(Node* root){
        if(root==nullptr) return;
        inorder(root->left);
        inOrder.push_back(root->data);
        inorder(root->right);
        
    }
    void buildTree(Node* root){
        if(root==nullptr) return;
        buildTree(root->left);
        root->data = inOrder[i++];
        buildTree(root->right);
        
    }
    Node *binaryTreeToBST (Node *root)
    {
        if(root==nullptr) return root;
        //get the inorder of current tree 
        inorder(root);
        //sort it, so it becomes inorder of BST
        sort(inOrder.begin(),inOrder.end());
        //build BST based on sorted inorder..
        buildTree(root);
        return root;
        
    }
