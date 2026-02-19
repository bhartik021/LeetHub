class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
    for(int i = 0; i < nums.size(); i++) {
            nums[i] %= 2;
        }
        
        vector<int> prefixCounnt(nums.size() + 1);
        prefixCounnt[0] = 1;
        int s = 0, ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            s += nums[i];
            ans += (s >= k) ? prefixCounnt[s - k] : 0;
            prefixCounnt[s]++;
        }
        return ans;    
    }
};