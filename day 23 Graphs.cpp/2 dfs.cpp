  public:
  
    vector<int>v;
    
    void dfs(int node,vector<int>adj[],vector<int>&vis)
    {
      
       vis[node]=1;
       v.push_back(node);
       
       for(auto i : adj[node])
       {
           if(!vis[i])
           {
               dfs(i,adj,vis);
           }
       }
    }
  
  
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
        
        vector<int>vis(100001,0);
        
        dfs(0,adj,vis);
        return v;
    }
};