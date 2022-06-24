class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        map<int,int>m;
        
       for(int i=0;i<nums.size();++i)
        m[nums[i]]++;
    
   
    for(int i=0;i<m[0];++i)
        nums[i]=0;
    for(int i=0;i<m[1];++i)
        nums[m[0]+i]=1;
    for(int i=0;i<m[2];++i)
        nums[m[0]+m[1]+i]=2;
        
    }
};