
class Solution 
{
    
public:
    
    
    bool issy(TreeNode *lf,TreeNode *rt)
    {
        if((lf==NULL)||(rt==NULL))
        {
            return lf==rt;
        }
        
         
        if(lf->val!=rt->val)
        {
            return false;
        }
        
        
        return issy(lf->left,rt->right)&&issy(lf->right,rt->left);
    }
    bool isSymmetric(TreeNode* root)
    {
        
        if(root==NULL)
        {
            return true;
        }
       
        return issy(root->left,root->right);
        
    }
};