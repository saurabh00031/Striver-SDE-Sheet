
class Solution {
public:
    
     TreeNode* createBST(vector<int>&nums, int start, int end){
    if(start > end) return NULL;
    
    int mid = (end+start)/2;
    TreeNode* root = new TreeNode(nums[mid]);
    
    root->left = createBST(nums, start, mid-1);
    root->right = createBST(nums, mid+1, end);
    return root;
}
TreeNode* sortedArrayToBST(vector<int>& nums) {
    return createBST(nums,0,nums.size()-1);
}
};