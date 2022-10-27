class Solution {
public:
    
    string reverseWords(string s) 
    {
        int n=s.size();
        
        stringstream ss(s);
        string word;
        
        
        vector<string>v;
        
        while(ss>>word)
        {
            v.push_back(word);
        }

        reverse(v.begin(),v.end());
        
        string sp="";
        
        for(int i=0;i<v.size()-1;i++)
        {
            sp+=v[i];
            sp+=" ";
        }
        
        sp+=v[v.size()-1];
        
        return sp;

        
    }
};