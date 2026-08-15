class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    // t.c => O(n)^2
    // int maxSum = nums[0];
    // if(nums.empty()) return 0;
    // for(int i = 0; i < nums.size(); i++) {
    //     int sum = 0;
    //     for(int j = i; j < nums.size(); j++) {
    //         sum += nums[j];
    //         maxSum = max(maxSum, sum);
    //     }
    // }    
    // return maxSum;

    // t.c => O(n)
    int maxSum = INT_MIN;
    int sum = 0;
    for(auto num : nums) {
        sum += num;
        maxSum = max(maxSum, sum);
        if(sum < 0) sum = 0;
    }
    return maxSum;
    }
};