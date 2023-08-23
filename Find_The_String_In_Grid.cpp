   bool dfs(vector<vector<char>>&grid , string word ,int index ,int currrow , int currcol , int rowdir , int coldir
    , int rowmax , int colmax){
        if(index == word.size()){
            return true;
        }
        
        if(currrow < 0 || currrow >= rowmax || currcol < 0 || currcol >= colmax) return false;
        
        if(word[index] != grid[currrow][currcol]) return false;
        else if(dfs(grid, word , index+1 , currrow+rowdir , currcol+coldir , rowdir , coldir , rowmax , colmax)){
            return true;
        }
        return false;
    }
public:
    vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
        
        int drow[] = {-1, -1 , 0 , 1 , 1 , 1 , 0 , -1};
        int dcol[] = {0 , -1 , -1 , -1 , 0 , 1 , 1 ,1};
        
        int n = grid.size();
        int m = grid[0].size();
        
        
        vector<vector<int>>ans;
      
        
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] == word[0]){
                    for(int dir = 0 ; dir < 8 ; dir ++){
                        if(dfs(grid, word , 0 , i , j , drow[dir] , dcol[dir] , n , m)){
                            ans.push_back({i,j});
                            break;
                        }
                    }
                }
            }
        }
        
        return ans;
    }
