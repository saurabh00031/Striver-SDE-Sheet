
class Solution {
public:
    // helper function to check for palindrome
    bool isPalindrome(string &s, int start, int end) {
        while(start <= end) {
            if(s[start++] != s[end--])
                return false;
        }
        return true;
    }
    
    // helper function to find palindromic partitions
    void partition_helper(string &s, int identy, vector<string> &path, vector<vector<string>> &results) {
        // base case: all the partitions are done, last '|' after the last char of string
        if(identy == s.size()) {
            results.push_back(path);
            return;
        }
        // recursive calls
        for(int i = identy; s[i]; i++) {
            // make partitions if possible and make recursive call on the rem string
            if(isPalindrome(s, identy, i)) {
                // add left palindromic part of the partition
                path.push_back(s.substr(identy, i - identy + 1));
                // recursive call: on the right part of the partition made right now
                partition_helper(s, i + 1, path, results);
                // remove the added substr for next iteration: backtracking
                path.pop_back();   
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> results;
        vector<string> path;
        
        partition_helper(s, 0, path, results);
        return results;
    }
};