class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
    // int count = 0;
    // for(int i = 0; i < nums.size(); i++) {
    //     int sum = 0;
    //     for(int j = i; j < nums.size(); j++) {
    //         sum += nums[j];
    //         if(sum % k == 0) {
    //             count++;
    //         }
    //     }
    // }  
    // return count; 
    unordered_map<int, int>mp;
    mp[0] = 1;
    int prefixSum = 0, count = 0;
    for(int num : nums) {
        prefixSum += num;
        int rem = prefixSum % k;
        if(rem < 0) 
            rem += k;
            count += mp[rem];
            mp[rem]++;
    } 
    return count;
    }
};