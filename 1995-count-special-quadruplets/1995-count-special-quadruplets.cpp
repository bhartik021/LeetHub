class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
    // t.c => O(n^3)
    int count = 0, n = nums.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                for(int l = k + 1; l < n; l++) {
                    if(nums[i] + nums[j] + nums[k] == nums[l]) count++;
                }
            }
        }
    }    
    return count;
    }
};