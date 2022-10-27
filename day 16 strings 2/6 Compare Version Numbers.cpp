class Solution {
public:
    int compareVersion(string v1, string v2) 
    {
        //cout<<'5'-'\0'-48;
        int m = v1.length(),n = v2.length();
        int i=0,j=0;
        while(i<m && j<n)
        {
            int num1=0,num2=0;
            while(v1[i] != '.' && i < m)
            {
                num1 = num1*10 + (v1[i++]-'\0'-48);
            }
            if(v1[i] == '.') i++;
            while(v2[j] != '.' && j < n)
            {
                num2 = num2*10 + (v2[j++]-'\0'-48);
            }
            if(v2[j] == '.') j++;
            if(num1 == num2) continue;
            else if(num1 > num2) return 1;
            else if(num1 < num2) return -1;
        }
        if(i==m && j < n)
        {
            while(j<n)
            {
                int num2 = 0;
                while(v2[j] != '.' && j<n)
                {
                    num2 = num2*10 + (v2[j++]-'\0'-48);
                }
                if(v2[j] == '.') j++;
                if(num2 == 0) continue;
                else if(num2 > 0) return -1;
            }
        }
        else if(i<m && j == n)
        {
            while(i < m)
            {
                int num1 = 0;
                while(v1[i] != '.' && i < m)
                {
                    num1 = num1*10 + (v1[i++]-'\0'-48);
                }
                if(v1[i] == '.') i++;
                if(num1 == 0) continue;
                else if(num1 > 0) return 1;
            }
            
        }
        return 0;
    }
};