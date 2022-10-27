class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
         // your code here
        int n=arr.size();
        vector<int> results;
        deque<int> dq(k); // to store the indices of useful elements
        // front of the dq stores the index of the max window element
        
        // process the first window
        for(int i = 0; i < k; i++) {
            // remove element from back of dq if current element is greater than back element
            while(!dq.empty() && arr[i] >= arr[dq.back()])
                dq.pop_back();
            // push the current index at the end of deque
            dq.push_back(i);
        }
        // process the remaining elements
        for(int i = k; i < n; i++) {
            // add max of the prev window in results
            results.push_back(arr[dq.front()]);
            
            // remove the elements going out of window
            while(!dq.empty() && dq.front() <= i - k)
                dq.pop_front();
            
            // remove the useless elements
            while(!dq.empty() && arr[i] >= arr[dq.back()])
                dq.pop_back();
            
            // add the current index at the end of deque
            dq.push_back(i);
        }
        // add max of last window
        results.push_back(arr[dq.front()]);
        return results;
    }
};