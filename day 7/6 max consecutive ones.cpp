class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        
        int n=nums.size();
        int start=0;
        int maxx=0;
        int ct=0;
        
        for(int i=0;i<n;i++)
        {
           
           if(nums[i]==1)
           {
               ct++;
           }
            else
            {
                maxx=max(maxx,ct);
                ct=0;
            }
        }
        
        maxx=max(maxx,ct);
        
        return maxx;
        
    }
};