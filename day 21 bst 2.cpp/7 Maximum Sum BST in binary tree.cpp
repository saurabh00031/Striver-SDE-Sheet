
  class Data {
    public:
    int minVal;
    int maxVal;
    int sum;
    bool isBST;
};

class Solution {
public:
    Data solve(TreeNode *root, int &ans) {
        if (!root) {
            return {INT_MAX, INT_MIN, 0, true};
        }
        
        Data left = solve(root -> left, ans);
        Data right = solve(root -> right, ans);
        
        Data curr;
        curr.minVal = min(left.minVal, root -> val);
        curr.maxVal = max(right.maxVal, root -> val);
        curr.isBST = (left.isBST and right.isBST) and 
            (root -> val > left.maxVal and root -> val < right.minVal);
        curr.sum = left.sum + right.sum + root -> val;
        
        if (curr.isBST) {
            ans = max(ans, curr.sum);
        }
        return curr;
    }
    
    int maxSumBST(TreeNode* root) {
        if (!root) return 0;
        int ans = 0;
        Data temp = solve(root, ans);
        return ans;
    }

};