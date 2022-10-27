class Solution {
public:
    
    vector<vector<int>> merge(vector<vector<int>>& inter)
    {
        
       int n=inter.size();
        
    
       sort(inter.begin(),inter.end());
        
       if(n==0)
       {
         return {};
       }
        
       vector<vector<int>>sp;
        
      int right=1;
      int lval=inter[0][0];
      int rval=inter[0][1];
        
      while(right<n)
      {
          if(rval>inter[right][1])
          {
              right++;
          }
          else if(rval<inter[right][0])
          {
              sp.push_back({lval,rval});
              lval=inter[right][0];
              rval=inter[right][1];
              right++;
          }
          else
          {
              rval=inter[right][1];
              right++;
              
          }
          
          
      }
        
      sp.push_back({lval,rval});
        
      return sp;
        
        
    }
};