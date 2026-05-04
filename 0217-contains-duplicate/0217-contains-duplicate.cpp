class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    // 1st approach
    // for(int i = 0; i < nums.size() - 1; i++) {
    //     for(int j = i + 1; j < nums.size(); j++) {
    //         if(nums[i] == nums[j]) return true;
    //     }
    // }  
    // return false;  
    // }

    // 2nd approach
    // sort(nums.begin(), nums.end());
    // for(int i = 0; i < nums.size() - 1; i++) {
    //     if(nums[i] == nums[i+1]) 
    //     return true;
    // }    
    // return false;
    // }

    // 3rd approach - hash set
    // unordered_set<int>seen;
    // for(int n : nums) {
    //     if(seen.count(n) > 0) 
    //     return true;
    //     seen.insert(n);
    // }
    // return false;
    // }

    // 4th approach - hash map
    unordered_map<int, int>seen;
    for(int n : nums) {
        if(seen[n] >= 1) return true;
        seen[n]++;
    } 
    return false;
    }
};