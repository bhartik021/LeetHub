class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
    unordered_map<int, int>mp;
    // to make a window of size k
    for(int i = 0; i <= nums.size() - k; i++) {
        unordered_set<int>seen;
        for(int j = i; j < i + k; j++) {
            seen.insert(nums[j]);
        }
        // each value is counted only in a single window ( no duplicates )
        for(auto x : seen) {
            mp[x]++;
        }
    } 

    int ans = -1;

    // find largest value which is only one in a subarrays

    for(auto num : mp) {
        if(num.second == 1) {
            ans = max(ans, num.first);
        }
    } 

    return ans;

    }
};

