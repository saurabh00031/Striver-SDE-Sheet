class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums)
    {
     
        
        sort(nums.begin(), nums.end());
        vector<vector<int>> result = {{}, {nums[0]}};
        for(int i = 1, start = 1; i < nums.size(); i++) {
            if(nums[i] != nums[i-1]) start = 0;
            for(int end = result.size(); start < end; start++) {
                result.push_back(result[start]);
                result.back().push_back(nums[i]);
            }
        }
        return result;
        
        
    }
};