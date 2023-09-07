int minimumMultiplications(vector<int>& arr, int start, int end) {
        queue<pair<int,int>>q;
        q.push({start,0});
        vector<int> vis(1e5,1e9);
        vis[start]=0;
        int mod=1e5;
        if(start==end)return 0;
        while(!q.empty()){
            int node = q.front().first;
            int count = q.front().second;
            q.pop();
            for(auto it:arr){
                int num=(it * node)%mod;
                if(count+1<vis[num]){
                    vis[num]=count+1;
                    if(num==end)return count+1;
                    q.push({num,count+1});
                }
            }
        }
        return -1;
    }
