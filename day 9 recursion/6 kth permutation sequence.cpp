class Solution {
public:
   
    string getPermutation(int n, int k) 
    {
        
        int y=1;
        int sum=0;
        
        for(int i=n;i>=1;i--)
        {
            sum+=i*y;
            y=y*10;
        }
        
        string sp=to_string(sum);
        string vali=sp;
        
        for(int i=1;i<=k-1;i++)
        {
            sp=vali;
            next_permutation(sp.begin(),sp.end());
            vali=sp;
        }
        
        return sp;
         
    }
};