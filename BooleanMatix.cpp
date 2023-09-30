 void booleanMatrix(vector<vector<int> > &matrix)
    {
              //find the number of rows
        int a=matrix.size();
        // find the elements in one row
        int b=matrix[0].size();
        // flag_row to identify 1 in the row
        vector<int> row_flag(a,0);
        //flag column to set 1 in the column
        vector<int> column_flag(b,0);
        
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(matrix[i][j]==1){
                    row_flag[i]=1;
                    column_flag[j]=1;
                }
            }
        }
        
        for(int i=0;i<a;i++){
            if(row_flag[i]==1){
                for(int j=0;j<b;j++){
                    matrix[i][j]=1;
                }
            }
        }
        
        for(int j=0;j<b;j++){
            if(column_flag[j]==1){
                for(int i=0;i<a;i++){
                    matrix[i][j]=1;
                }
            }
        } 
    }
