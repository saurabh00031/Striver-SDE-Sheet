class Solution {
public:
    int trap(vector<int>&v)
    {
        
        int lf=0;
        int rt=v.size()-1;
        
        int lf_max=v[lf];
        int rt_max=v[rt];
        int res=0;
        
        while(lf<rt)
        {
            if(lf_max<rt_max)
            {
                lf++;
                lf_max=max(lf_max,v[lf]);
                res+=lf_max-v[lf];
            }
            else
            {
                rt--;
                rt_max=max(rt_max,v[rt]);
                res=res+rt_max-v[rt];
            }
        }
        
        return res;
        
        
        
    }
};