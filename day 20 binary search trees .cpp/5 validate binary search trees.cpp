/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   // iterative inorder traversal
bool isValidBST(TreeNode *root) {
    // edge case
    if(!root)
        return true;
    stack<TreeNode*> s;
    TreeNode *prev = NULL;

    while(!s.empty() || root) {
        // push the nodes on the left
        while(root) {
            s.push(root);
            root = root->left;
        }
        // leftmost node is taken into consideration
        root = s.top();
        s.pop();
        // violation of increasing order condition
        if(prev && root->val <= prev->val)
            return false;
        // update prev to be the current node under consideration
        prev = root;
        // move to the right child
        root = root->right;
    }
    return true;
}
};