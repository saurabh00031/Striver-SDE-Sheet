
class Solution {
public:
    
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
       
        vector<vector<int>>v;
        
        if(root==NULL)
        {
            return v;
        }
        
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
            int sz=q.size();
            vector<int>temp;
            
            for(int i=0;i<sz;i++)
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
                
                temp.push_back(node->val);
            }
            
            v.push_back(temp);
        }    
        
        return v;
        
    }
};