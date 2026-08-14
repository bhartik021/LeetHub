class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int>mp;
    for(int i = 0; i < nums.size(); i++) {
        mp[nums[i]] = i;
    }    

    for(int i = 0; i <= nums.size(); i++) {
        int check = target - nums[i];
        if(mp.count(check) && mp[check] != i) {
            return {i, mp[check]}; 
        }
    }
    return {-1, -1};
    }
};