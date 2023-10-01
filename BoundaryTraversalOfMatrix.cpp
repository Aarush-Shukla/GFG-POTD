   vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
               vector<int>ans;
        for(int i=0;i<m;i++)
            ans.push_back(matrix[0][i]);
        
        for(int i=1;i<n-1;i++)
            ans.push_back(matrix[i][m-1]);
            
        if(n>1)    
        for(int i=m-1;i>=0;i--)
            ans.push_back(matrix[n-1][i]);
        
        if(m>1)
        for(int i=n-2;i>0;i--)
            ans.push_back(matrix[i][0]);
        
        return ans;
    }
