class Solution {
public:
    string countAndSay(int n) {
       if(n <= 1) return "1";
        string s = "1";
        for(int i = 2; i <= n; i++){
            string temp = "";
            char cache = s[0]; int count = 1;
            for(int j = 1; j < s.length(); j++){
                if(cache != s[j]){
                    temp = temp + to_string(count) + string(1, cache);
                    count = 1;
                    cache = s[j];
                }
                else count++;
            }
            temp = temp + to_string(count) + string(1, cache);
            swap(temp, s);
        }
        return s;  
    }
};