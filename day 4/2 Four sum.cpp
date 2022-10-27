class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        vector<vector<int>>ans;
        set<vector<int>>temp;
        sort(nums.begin(),nums.end());
        long long int sum=0;
        if(nums.size()<4)
            return ans;
        for(int i=0;i<nums.size()-3;i++)
        {
            long target1=target-nums[i];
            for(int j=i+1;j<nums.size()-2;j++)
            {
                 long target2=target1-nums[j];
                int k=j+1,e=nums.size()-1;
                while(k<e)
                {
                     long target3=target2-nums[k];
                    if(nums[e]==target3)
                    {
                        if(temp.find({nums[i],nums[j],nums[k],nums[e]})==temp.end())
                        {
                            temp.insert({nums[i],nums[j],nums[k],nums[e]});
                            ans.push_back({nums[i],nums[j],nums[k],nums[e]});
                        }
                        k++;
                        e--;
                    }
                    else if(nums[e]>target3)
                        e--;
                    else
                        k++;
                }
            }
        }
        return ans;
  
        
    }
};