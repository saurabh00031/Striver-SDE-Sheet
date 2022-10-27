class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        const int ne=needle.size();
        const int n=haystack.size();
        
        int fix=0;
       int flag=0;
        
        for(int i=0;i<=n-ne;i++)
        {
            cout<<haystack.substr(i,ne)<<endl;
            
            if(haystack.substr(i,ne)==needle)
            {
                fix=i;
                flag=1;
                break;
              
            }
        }
        
        if(flag==1)
        {
            return fix;
        }
        else
        {
            return -1;
        }
    }
};