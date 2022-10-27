
class Solution {
    int prev_candidate;
public:
    Solution() {
        // to avoid duplicates
        prev_candidate = 60;
    }
    // helper function to find valid combinations
    void find_combinations(vector<int> &candidates, int target, int identy, vector<int> &path, vector<vector<int>> &results) {
        // base case
        if(identy == candidates.size()) {
            // the current path is a valid subset
            if(target == 0)
                results.push_back(path);
            return;
        }    
        // we have 2 options:-
        // option-1: pick element without repetition
        if(candidates[identy] <= target && prev_candidate != candidates[identy]) {
            // add the element in the path
            path.push_back(candidates[identy]);
            // recursive call with the next index: doesn't allow repetition of the current element
            find_combinations(candidates, target - candidates[identy], identy + 1, path, results);
            // update prev candidate
            prev_candidate = candidates[identy];
            // unpick the element for the next iteration: backtracking
            path.pop_back();
        }
     
        find_combinations(candidates, target, identy + 1, path, results);
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> results;
        vector<int> path;
        
        sort(candidates.begin(), candidates.end());
        
        find_combinations(candidates, target, 0, path, results);
        return results;
    }
};