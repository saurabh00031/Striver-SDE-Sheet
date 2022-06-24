class Solution {
public:
    void nextPermutation(vector<int>& v) 
    {
        
        int n=v.size();
        next_permutation(v.begin(),v.end());
        
        cout<<"[";
        cout<<v[0]<<"";
        
        for(int i=1;i<n;i++)
        {
          cout<<","<<v[i]<<"" ;
        }
        
        cout<<"]"<<"";
        
        
        
        
    }
};