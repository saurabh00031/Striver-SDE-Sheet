class Solution {
public:
    int maxProfit(vector<int>& arr) 
    {
       
       int minn=INT_MAX;
       int maxx=0;
    
       int n=arr.size();
        
       for(int i=0;i<n;i++)
       {
           minn=min(minn,arr[i]);
           maxx=max(maxx,arr[i]-minn);
       }
    
        return maxx;
        
        
    }
};