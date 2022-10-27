class Solution {
public:
   
     
    void permutation(int k,vector<int>& nums,vector<vector<int>>& ans){
    if(k==nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i=k;i<nums.size();i++){
        swap(nums[i],nums[k]);
        permutation(k+1,nums,ans);
        swap(nums[i],nums[k]);    
    }
    return;
}
vector<vector<int>> permute(vector<int>& nums) {
   int n = nums.size();
    vector<vector<int>> ans;
    permutation(0, nums,ans);
    return ans;
}
};