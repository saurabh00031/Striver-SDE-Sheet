
class Solution 
{
public:
    
    int issy(TreeNode *root)
    {
        if(root==NULL)
        {
            return 1;
        }
        
        int lf=issy(root->left);
        
        if(lf==-1)
        {
            return -1;
        }
        
        int rt=issy(root->right);
        
        if(rt==-1)
        {
            return -1;
        }
        
        if(abs(rt-lf)>1)
        {
            return -1;
        }
        
        return 1+max(lf,rt);
    }
    
    bool isBalanced(TreeNode* root) 
    {
       if(issy(root)!=-1)
       {
           return true;
       }
        
            return false;
        
    }
};