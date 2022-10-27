class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        int n=numRows;
        
        vector<vector<int>>v;
                 
        
      if(n==1)
      {
          vector<int>k1;
          k1.push_back(1);
          v.push_back(k1);  
          
          return v;
      }
        
      if(n==2)
      {
          vector<int>k1;
          k1.push_back(1);
          v.push_back(k1);
          
          vector<int>k2;
          k2.push_back(1);
          k2.push_back(1);
          v.push_back(k2); 
          
          return v;
      }
        
      if(n==3)
      {
          vector<int>k1;
          k1.push_back(1);
          v.push_back(k1);
          
          vector<int>k2;
          k2.push_back(1);
          k2.push_back(1);
          v.push_back(k2);  
          
          vector<int>k3;
          k3.push_back(1);
          k3.push_back(2);
          k3.push_back(1);
          v.push_back(k3);
          
          return v;
          
      }
        
       vector<int>sp; 
      
      for(int i=3;i<=n;i++)  
      {
          if(i==3)
          {
               vector<int>k1;
               k1.push_back(1);
               v.push_back(k1);
          
               vector<int>k2;
               k2.push_back(1);
               k2.push_back(1);
               v.push_back(k2);  
              
              
              
              sp.push_back(1);
              sp.push_back(2);
              sp.push_back(1);  
              v.push_back(sp);
          }
          else
          {
          vector<int>ssp;
          
          ssp.push_back(1);
          
          for(int j=0;j<i-2;j++)
          {
             ssp.push_back(sp[j]+sp[j+1]);
          }
          
          ssp.push_back(1);
          v.push_back(ssp);
          sp=ssp;
          ssp.clear();
          }
      }
      return v;
        
        
    }
};