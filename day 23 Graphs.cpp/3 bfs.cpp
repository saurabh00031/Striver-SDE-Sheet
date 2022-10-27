  public:

    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {
      int n=100001;
      
      vector<int>vis(n+1,0);
      
       queue<int>q;
       q.push(0);
       
       vector<int>temp;
       
       while(!q.empty())
       {
           int node=q.front();
           temp.push_back(node);
           q.pop();
           
           for(auto i : adj[node])
           {
               if(!vis[i])
               {
                   q.push(i);
                   vis[i]=1;
               }
           }
       }
       
       
       return temp;
        
        
    }
};