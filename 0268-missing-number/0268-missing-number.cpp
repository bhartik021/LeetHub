class Solution {
public:
    int missingNumber(vector<int>& nums) {
    // tc - o(n), sc - o(1)
    int n = nums.size();
    int expectedSum = (n * (n + 1)) / 2;
    int actualSum = 0;
    for(int num : nums) {
        actualSum += num;
    }    
    return expectedSum - actualSum;
    }
};