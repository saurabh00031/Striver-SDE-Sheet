class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
   
        map<int,int>mp;
        
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        
        int mix=0;
        vector<int>sp;
        
        for(int i=0;i<n;i++)
        {
            if(mp[nums[i]]>(n/3))
            {
                mix= nums[i];
                sp.push_back(mix);
            }
        }
        
        sort(sp.begin(),sp.end());
        vector<int>::iterator ip;
        ip=unique(sp.begin(),sp.end());
        sp.resize(distance(sp.begin(),ip));
        return sp;
    }
}; 
