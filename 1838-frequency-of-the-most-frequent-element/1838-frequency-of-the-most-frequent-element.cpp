class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
    sort(begin(nums), end(nums));
        long i = 0, N = nums.size(), ans = 1, sum = 0;
        for (int j = 0; j < N; ++j) {
            sum += nums[j];
            while ((j - i + 1) * nums[j] - sum > k) sum -= nums[i++];
            ans = max(ans, j - i + 1);
        }
    return ans;   
    }
};