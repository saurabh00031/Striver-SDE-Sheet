class Solution {
  public:
    vector <int> bottomView(Node *root) {
      
        if(root==NULL)
        {
            return {};
            
        }
        
        map<int,int>mp;
        
        queue<pair<Node*,int>>q;
        
        
        q.push({root,0});
        
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            
            Node *node=p.first;
            int x=p.second;
            
           
                mp[x]=node->data;
            
            
            if(node->left)
            {
                q.push({node->left,x-1});
            }
            
            if(node->right)
            {
                q.push({node->right,x+1});
            }
            
        }
        
        vector<int>red;
        
        for(auto s: mp)
        {
            red.push_back(s.second);
        }
        
        return red;
    }