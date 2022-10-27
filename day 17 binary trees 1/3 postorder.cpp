
class Solution {
public:
    
    vector<int>v;
   
    int postorder(TreeNode *root)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        postorder(root->left);
        postorder(root->right);
        
        v.push_back(root->val);
        
        return 0;
    }
    
    vector<int> postorderTraversal(TreeNode* root) 
    {
        postorder(root);
        return v;
        
    }
};