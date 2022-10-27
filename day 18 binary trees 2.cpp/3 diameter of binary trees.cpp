
class Solution 
{
    
public:
    
    int maxx;
    
    Solution()
    {
        maxx=0;
    }
    
    int dm(TreeNode *root)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        int lf=dm(root->left);
        int rt=dm(root->right);
        
        maxx=max(maxx,lf+rt);
        
        return 1+max(lf,rt);
        
    }
    
    
    int diameterOfBinaryTree(TreeNode* root)
    {
        
        dm(root);
        return maxx;
        
    }
};