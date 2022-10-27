class Solution 
{
    
public:
    
  vector<int> twoSum(vector<int>& nums, int target)
  {
      
    unordered_map<int,int> s;
    vector<int> ans;
    
    for(int i=0;i<nums.size();i++)
    {
        int temp = target-nums[i];
      
        if(s.find(temp) != s.end())
        {
            ans.push_back(s[temp]);
            ans.push_back(i);   
        }
        
        s.insert(make_pair(nums[i],i));     
    }
    
    return ans;
   
        
   }
};