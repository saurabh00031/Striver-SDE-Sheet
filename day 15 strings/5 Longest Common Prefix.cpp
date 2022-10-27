class Solution {
public:
    string longestCommonPrefix(vector<string>&s)
    {
        if(s.size()==1)
        {
            return s[0];
        }
        
        string res=s[0];
        int x=1;
        
        int i=0;
        
        while(x)
        {
            for (int j=1;j<s.size();j++) 
            {
                if (s[j].size()==i||s[j][i]!=res[i])
                {
                    return res.substr(0,i);
                }
            }
            
            i++; 
        }
        
          return "";
        
    }
};