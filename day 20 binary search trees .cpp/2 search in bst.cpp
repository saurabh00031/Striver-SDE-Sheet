
class Solution {
public:
    
  
    
    TreeNode* searchBST(TreeNode* root, int value) 
    {
        
        TreeNode *node=root;
         
        
       while((root!=NULL)&&(root->val!=value))
       {
        if(root->val==value)
        {
            return root;
        }
        else if((root->val)<value)
        {
            root=root->right;
        }
        else
        {
            root=root->left;
        }
       }
       
        return root;
        
        
    }
};