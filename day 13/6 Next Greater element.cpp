class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
        
            stack<int>s ;
    for(int i=nums.size()-1; i>=0; i--){
        s.push(nums[i]);
    }
    vector<int> ans;
    
    for(int i=nums.size()-1; i>=0; i--){
        if(s.top()>nums[i])
            ans.push_back(s.top());
        else{
            while(!s.empty() && s.top()<=nums[i]){
                s.pop();
            }
            if(!s.empty() && s.top()>nums[i])
                ans.push_back(s.top());
            else
                ans.push_back(-1);
        }
        s.push(nums[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
        
    }
};