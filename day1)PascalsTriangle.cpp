class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        
        int fix;
        int flag=0;
        
        for(int i=0;i<n-1;i++)
        {
            if((nums[i]^nums[i+1])==0)
            {
                fix=nums[i];
                flag=1;
                break;
            }
            
          
        }
        
        
        if(flag==1)
        {
            for(auto it=nums.begin();it!=nums.end();it++)
            {
                if(*it==fix)
                {
                    nums.erase(it);
                    it--;
                    break;
                }
            }
        }
        
        int mix;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=(i+1))
            {
                mix=i+1;
                break;
            }
        }
        
        vector<int>p;
        p.push_back(fix);
        p.push_back(mix);
        
        return p;
        
        
        
    }
};