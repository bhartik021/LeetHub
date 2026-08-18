class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
    unordered_map<int, int>mp;
    // subarray of size k
    for(int i = 0; i <= nums.size() - k; i++) {

        unordered_set<int>seen;

        for(int j = i; j < i + k; j++) {
            seen.insert(nums[j]);
        }

        for(auto x : seen) {
            mp[x]++;
        }
    }    

    int ans = -1;

    for(auto num : mp) {
        if(num.second == 1) {
            ans = max(ans, num.first);
        }
    }

    return ans;
    }
};