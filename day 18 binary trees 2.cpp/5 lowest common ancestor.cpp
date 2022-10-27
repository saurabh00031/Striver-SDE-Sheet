/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    
    TreeNode* fun(TreeNode *root,TreeNode *p,TreeNode *q)
    {
        
        if((root==NULL)||(root==p)||(root==q))
        {
            return root;
        }
        
        
        TreeNode *pp=fun(root->left,p,q);
        TreeNode *qq=fun(root->right,p,q);
        
        if(pp==NULL)
        {
            return qq;
        }
        
        else if(qq==NULL)
        {
            return pp;
        }
        
        
       else
       {
            return root;
       }
        
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        
        return fun(root,p,q);
    }
};