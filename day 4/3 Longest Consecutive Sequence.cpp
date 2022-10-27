class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        
        map<int,int>mp;
        
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        
        nums.clear();
        
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            nums.push_back(it->first);
        }
        
        if(n==0)
        {
            return 0;
        }
        
        sort(nums.begin(),nums.end());
        
        int len=1;
        int maxx=INT_MIN;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            int value=nums[i+1]-nums[i];
            
            if(value==1)
            {
                len++;
            }
            else
            {
                maxx=max(maxx,len);
                len=1;
            }
        }
        
        maxx=max(maxx,len);
        
        return maxx;
    } 
        
};
