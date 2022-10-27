 {
  vector<int>v;
        
        if(root==NULL)
        {
            return v;
        }
        
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
            int size=q.size();

            vector<int>sp;
            
            for(int i=0;i<size;i++)
            {
                TreeNode *node=q.front();
                q.pop();
                
                if(node->left)
                {
                    q.push(node->left);
                }
                if(node->right)
                {
                    q.push(node->right);
                }
                
                sp.push_back(node->val);
                
            }
            
            
            v.push_back(sp[sp.size()-1]);
            
            
            
        }
        
        return v;

 }