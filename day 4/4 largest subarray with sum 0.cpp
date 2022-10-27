
class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
       int pre=0;
       int maxx=0;
       unordered_map<int,int>mp;
       mp[0]=-1;
       
       
       for(int i=0;i<n;i++)
       {
          pre=pre+A[i];
          
          if(mp.find(pre)!=mp.end())
          {
              maxx=max(maxx,i-mp[pre]);
          }
          else
          {
              mp[pre]=i;
          }
       }
       
       
       return maxx;
    }
};
