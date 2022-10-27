
class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
     
        for(const char &ch : str) {
            switch(ch) {
                case '(':
                    s.push(')');
                    break;
                case '{':
                    s.push('}');
                    break;
                case '[':
                    s.push(']');
                    break;
                default:
                   
                    if(s.empty())
                        return false;
                    
                    else if(ch == s.top()) 
                        s.pop();
                    else
                        return false;
                    break;       
            }
        }
      
        return s.empty();
    }
};