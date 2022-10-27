class Solution {
public:
    void merge(vector<int>&nums1, int m, vector<int>&nums2, int n) 
    {
        
    
      int i=nums1.size()-1;
      m--;
      n--;
        
      while((m>=0)&&(n>=0))
      {
          if(nums1[m]>=nums2[n])
          {
              nums1[i]=nums1[m];    //assign with greater element
              m--;
          }
          else
          {
              nums1[i]=nums2[n];    //assign with smaller element
              n--;
          }
          
          i--;
      }
        
      if(n>=0)  
      {
    
        for(int i=0;i<=n;i++)
        {
            nums1[i]=nums2[i];
        }
          
          return;
        
      }
    }
};