class Solution {
public:
    int majorityElement(vector<int>& nums) {
    // brute force => n^2
    // for(int i = 0; i < nums.size(); i++) {
    //     int count = 0;
    //     for(int j = 0; j < nums.size(); j++) {
    //         if(nums[i] == nums[j]) count++;
    //     }

    //     if(count > nums.size() / 2) return nums[i];
    // }    

    // return -1;

    unordered_map<int, int>mp;
    for(int num : nums) {
        mp[num]++;
    }

    for(auto x : mp) {
        if(x.second > nums.size() / 2) return x.first;
    }

    return -1;
    }
};