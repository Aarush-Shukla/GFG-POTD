    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        int visited[V]={0};
        //since in question given 0 based indexing, so we take 0 as starting node
        visited[0]=1;
        queue<int> q;
        q.push(0);
        vector<int> bfs;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            bfs.push_back(node);
            for(i:adj[node]){
                if(!visited[i]){
                    q.push(i);
                    visited[i]=1;
                }
            }
            
        }
        
        return bfs;
    }
