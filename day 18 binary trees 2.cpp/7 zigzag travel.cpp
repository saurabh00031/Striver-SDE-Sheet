
class Solution 
{
    
public:
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        
        vector<vector<int>>v;
        
        if(root==NULL)
        {
            return {};
        }
        
        queue<TreeNode*>q;
        
        q.push(root);
        int ct=0;
        
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
            
            if(ct%2==0)
            {
                v.push_back(temp);
            }
            else
            {
                reverse(temp.begin(),temp.end());
                v.push_back(temp);
            }
            ct++;
        }
        
        return v;
        
        
    }
};