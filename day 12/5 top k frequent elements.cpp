class Solution {
public:
    
vector<int> topKFrequent(vector<int>& nums, int k)
{

int n=nums.size();
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
map<int,int>mp;
    
for(int i=0;i<n;i++)
{
   mp[nums[i]]++;
}

    for(auto it=mp.begin();it!=mp.end();it++)
    {
        pq.push({it->second,it->first});
        
        if(pq.size()>k)
        {
            pq.pop();
        }
    }
    
    vector<int>sp;
    
    while(pq.size()>0)
    {
        sp.push_back(pq.top().second);
        pq.pop();
    }
    
    
    return sp;
  
}
};