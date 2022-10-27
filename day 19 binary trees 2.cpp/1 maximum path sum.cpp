
class Solution 
{
    
public:
    
    int maxx;
    
    Solution()
    {
      maxx=INT_MIN;
    }
    
    int sum(TreeNode *root)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        int lf=max(0,sum(root->left));
        int rt=max(0,sum(root->right));
        
        maxx=max(maxx,lf+rt+root->val);
        
        return root->val+max(lf,rt);
    }
    
    int maxPathSum(TreeNode* root) 
    {
        
        sum(root);
        return maxx;
        
    }
};