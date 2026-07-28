class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    // time complexity O(n)^2
    for(int i = 0; i <= nums.size() - 2; i++) {
        for(int j = i + 1; j <= nums.size() - 1; j++) {
            if(nums[i] + nums[j] == target) return {i, j};
        }
    }    
    return {-1, -1};
    }
};