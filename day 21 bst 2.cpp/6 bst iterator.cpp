
class BSTIterator {
public:
    stack<TreeNode*> s;
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    
   
    void inorder(TreeNode *root) {
     
        while(root) {
            s.push(root);
            root = root->left;
        }
    }
    
    int next() {
       
        TreeNode *top = s.top();
        s.pop();
       
        inorder(top->right);
        return top->val;
    }
    
    bool hasNext() {
        return !s.empty();
    }
};

