class Solution {
public:
    int missingNumber(vector<int>& nums) {
    // tc - o(n), sc - o(1)
    // int n = nums.size();
    // int expectedSum = (n * (n + 1)) / 2;
    // int actualSum = 0;
    // for(int num : nums) {
    //     actualSum += num;
    // }    
    // return expectedSum - actualSum;

    // with bit manipulation
    int ans = nums.size();
    for(int i = 0; i < nums.size(); i++) {
        ans ^= i ^ nums[i];
    }
    return ans;
    }
};