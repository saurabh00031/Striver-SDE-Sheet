vector<int> Solution::repeatedNumber(const vector<int> &A) 
{
    map<long long,long long>mp;
    vector<int>v;
    
    for(long long int i=0;i<A.size();i++)
    {
        mp[A[i]]++;
    }
    
    long long int maxx=INT_MIN;
    
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        maxx=max(maxx,it->first);
        
        if(it->second>1)
        {
             v.push_back(it->first);
        }
        
    }
    
    for(long long int i=1;i<=maxx;i++)
    {
        if(mp[i]==0)
        {
            v.push_back(i);
        }
    }
    
    
    return v;
    
    
    
    
    
    
}
