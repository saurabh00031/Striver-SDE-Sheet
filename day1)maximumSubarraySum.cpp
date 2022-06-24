class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
    
         int maxx=nums[0];
         int n=nums.size();
         int curr=0;
        
        for(int i=0;i<n;i++)
        {
           curr=curr+nums[i];
           maxx=max(maxx,curr);
           if(curr<0)
           {
               curr=0;
           }
        }
        
        return maxx;
        
    }
};