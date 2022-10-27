class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        map<int,int>mp;
        
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        
        int mix=0;
        
        for(int i=0;i<n;i++)
        {
            if(mp[nums[i]]>(n/2))
            {
                mix= nums[i];
                break;
            }
        }
        
        return mix;
    }
};