   void solve(Node* root,vector<int>& cost,int level){
        if(!root) return;
        if(root->left==NULL && root->right==NULL){
            cost.push_back(level);
            return;
        }
        solve(root->left,cost,level+1);
        solve(root->right,cost,level+1);
    }


    int getCount(Node *root, int k)
    {
          if(root->left==NULL && root->right==NULL){
            return 1 ;
        }
        vector<int> cost;
        solve(root,cost,1);
        
        sort(cost.begin(),cost.end());
        //for(auto it:cost) cout<<it<<" ";
        int cnt=0;
        
        for(int i=0;i<cost.size();i++){
            if(k-cost[i]< 0) break;
            k-=cost[i];
            cnt++;
        }
        return cnt;
    }
