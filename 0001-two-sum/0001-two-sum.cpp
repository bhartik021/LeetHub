class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    // for(int i = 0; i < nums.size(); i++) {
    //     for(int j = i + 1; j < nums.size(); j++) {
    //         if(nums[i] + nums[j] == target) {
    //             return {i, j};
    //         }
    //     }
    // }    
    // return {-1, -1};
    unordered_map<int, int>pair_index;
    for(int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        if(pair_index.find(target - num) != pair_index.end()) {
            return {i, pair_index[target - num]};
        }
        pair_index[num] = i;
    }
    return {-1, -1};
    }
};