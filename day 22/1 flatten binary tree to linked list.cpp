
class Solution {
public:
 
void flatten(TreeNode *root) {
  
    if(!root)
        return;
    
    while(root) {
      
        if(root->left) {
            TreeNode *leftRightMost = root->left;
            while(leftRightMost->right)
                leftRightMost = leftRightMost->right;
          
            leftRightMost->right = root->right;
            root->right = root->left;
            root->left = NULL;
        }
    
        root = root->right;
    }
}
};