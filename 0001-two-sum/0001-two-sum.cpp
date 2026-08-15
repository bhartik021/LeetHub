class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    // time complexity => O(n)^2
    // for(int i = 0; i < nums.size(); i++) {
    //     for(int j = i + 1; j < nums.size(); j++) {
    //         if((nums[i] + nums[j]) == target) return {i, j};
    //     }
    // }    
    // return {};

    // time complexity =>O(n)
    unordered_map<int, int>mp;
    for(int i = 0; i < nums.size(); i++) {
        mp[nums[i]] = i;
    }

    for(int i = 0; i < nums.size(); i++) {
        int check = target - nums[i];
        if(mp.count(check) && mp[check] != i) {
            return {i, mp[check]};
        }
    }
    return {};
    }
};