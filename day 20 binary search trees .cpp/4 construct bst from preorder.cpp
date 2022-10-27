

class Solution {
public:
     TreeNode* bstFromPreorder(vector<int>& preorder) 
   {
        int i=0;
     
        return build(preorder,i,INT_MAX);
   }
    
    TreeNode* build(vector<int>& preorder,int &i, int bound)
    {
        if(i==preorder.size() ||preorder[i]>bound)
            return NULL;
        TreeNode* node=new TreeNode(preorder[i++]);
        
        node->left=build(preorder,i,node->val);
        
        node->right=build(preorder,i,bound);
        
        return node;
    }
};