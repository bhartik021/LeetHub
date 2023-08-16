class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//        int n = nums.size();
//        vector<int> result;

//         for (int i = 0; i <= n - k; ++i) {
//             int max_val = nums[i]; // Initialize max_val with the first element of the window
//             for (int j = i; j < i + k; ++j) {
//                 max_val = std::max(max_val, nums[j]); // Update max_val by comparing with other elements
//             }
//             result.push_back(max_val); // Store the maximum for the current window
//         }

//         return result;
        
        deque<int>dq;
        vector<int>ans;
        for(int i = 0; i < nums.size(); i++) {
            if(!dq.empty() && dq.front() == i - k)
                dq.pop_front();
            while(!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();
            dq.push_back(i);
            if(i >= k - 1)
                ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};