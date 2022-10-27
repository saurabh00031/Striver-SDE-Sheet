

class Solution {
public:
    
    vector<int>v;
    
    int inorder(TreeNode *root)
    {
        
        if(root==NULL)
        {
            return 0;
        }
        
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
        
        return 0;
        
    }
    
    
    
    vector<int> inorderTraversal(TreeNode* root) 
    {
      
       inorder(root);
       return v;
      
    }
};