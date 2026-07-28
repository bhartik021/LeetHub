class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    // time complexity O(n)^2
    // for(int i = 0; i <= nums.size() - 2; i++) {
    //     for(int j = i + 1; j <= nums.size() - 1; j++) {
    //         if(nums[i] + nums[j] == target) return {i, j};
    //     }
    // }    
    // return {-1, -1};


    // using hashtable

    unordered_map<int, int>mp;
    // firstly we will insert elements along with its index in map
    for(int i = 0; i < nums.size(); i++) {
        mp[nums[i]] = i;
    }
    // now we will iterate over the array elements 
    for(int i = 0; i < nums.size(); i++) {
        // here we will store target - current element subtraction
        int check = target - nums[i];
        // here will check if this subtraction exists in the map that should not be equal to its index
        if(mp.count(check) && mp[check] != i) {
            return {i, mp[check]};
        }
    }
    return {-1, -1};
    }
};