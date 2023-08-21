    int Count(vector<vector<int> >& matrix) {
         int ans = 0,cnt = 0;
        int n = matrix.size(), m = matrix[0].size();
        
        for(int row = 0; row < n; row++){
            for(int col = 0; col < m; col++){
                if(matrix[row][col] == 1){
                    for(int delrow = -1; delrow <= 1; delrow++){
                        for(int delcol = -1; delcol <= 1; delcol++){
                            int nrow = row + delrow;
                            int ncol = col + delcol;
                            if(nrow>=0 and ncol>=0 and nrow<n and ncol<m and matrix[nrow][ncol]==0){
                                cnt++;
                            }
                        }
                    }
                    if(cnt > 0 and cnt%2==0){
                        ans++;
                    }
                    cnt = 0;
                }
            }
        }
        return ans;
    }
