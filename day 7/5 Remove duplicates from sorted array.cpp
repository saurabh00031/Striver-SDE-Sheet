class Solution {
public:
    
    int removeDuplicates(vector<int> &nums) 
    {
         int n=nums.size();
         map<int,int>mp;
        
         for(int i=0;i<n;i++)
         {
             mp[nums[i]]++;
         }
        
         int x=0;
        
         for(auto it=mp.begin();it!=mp.end();it++)
         {
             nums[x]=it->first;
             x++;
         }
        
        return mp.size();
    }
};