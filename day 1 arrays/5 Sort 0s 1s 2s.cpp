class Solution {
public:
    
    void sortColors(vector<int>& nums)
    {
        int n=nums.size();
        
        int mid=0;
        int i=0;
        int j=nums.size()-1;
        
        while(mid<=j)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid++],nums[i++]);
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid],nums[j--]);
            }
        }
        
        
        
    }
};