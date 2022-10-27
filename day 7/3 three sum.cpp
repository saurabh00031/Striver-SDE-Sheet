class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        int n=nums.size();
        set<vector<int>>s;
        
        
           
        sort(nums.begin(),nums.end());
                

        for(int i=0;i<n;i++)
        {
            int sum=-nums[i];
            int l=i+1;
            int h=n-1;
            
            while(l<h)
            {
               
                if((nums[l]+nums[h])==sum)
                {
                    s.insert({nums[i],nums[l],nums[h]});
                    h--;
                    l++;
                }
                else if((nums[l]+nums[h])<sum)
                {
                    l++;
                }
                else
                {
                    h--;
                }
                
            }
            
            
        }
        
        vector<vector<int>>v;
        vector<int>temp;
        
        for(auto i : s)
        {
            v.push_back(i);
          
        }
        
        return v;
        
       
    }
};