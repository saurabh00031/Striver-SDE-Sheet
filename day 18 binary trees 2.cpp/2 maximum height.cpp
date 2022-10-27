
class Solution {
public:
   
    
    int depth(TreeNode *root)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        int lf=depth(root->left);
        int rt=depth(root->right);
        
        return 1+max(lf,rt);
        
        
    }
    
    int maxDepth(TreeNode* root) 
    {
       return depth(root);
       
    }
};