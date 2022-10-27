
class Solution {
public:

    void find_combinations(vector<int> &candidates, int target, int idx, vector<int> &path, vector<vector<int>> &results) {
       
        if(idx == candidates.size()) {
         
            if(target == 0)
                results.push_back(path);
            return;
        }
       
        if(candidates[idx] <= target) {
            
            path.push_back(candidates[idx]);
          
            find_combinations(candidates, target - candidates[idx], idx, path, results);
          
            path.pop_back();
        }
       
        find_combinations(candidates, target, idx + 1, path, results);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> results;
        vector<int> path;
        
        find_combinations(candidates, target, 0, path, results);
        return results;
    }
};