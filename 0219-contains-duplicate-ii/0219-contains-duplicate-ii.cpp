class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    // 1st approach - brute force - o(n^2) - won't work for large inputs    
    // for(int i = 0; i < nums.size() - 1; i++) {
    //     for(int j = i + 1; j < nums.size(); j++) {
    //         if((nums[i] == nums[j]) && (abs(i - j) == k)) return true;
    //     }
    // }    
    // return false;
    
    // using hashmap
    unordered_map<int, int>seen;
    for(int i = 0; i < nums.size(); i++) {
        if(seen.count(nums[i])) {
            if(i - seen[nums[i]] <= k) return true;
        }
        seen[nums[i]] = i;
    }
    return false;
    }
};

