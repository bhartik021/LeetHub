class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    // brute force O(n^2)
    // int minLen = INT_MAX;
    // for(int i = 0; i < nums.size(); i++) {
    //     int sum = 0;
    //     for(int j = i; j < nums.size(); j++) {
    //         sum += nums[j];
    //         if(sum >= target) {
    //             int len = j - i + 1;
    //             minLen = min(len, minLen);
    //         }
    //     }
    // }  
    // return minLen == INT_MAX ? 0 : minLen;  

    // sliding window
    int minLen = INT_MAX;
    int sum = 0;
    int left = 0;
    for(int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        while(sum >= target) {
            minLen = min(minLen, i - left + 1);
            sum -= nums[left];
            left++;
        }
    }
    return minLen == INT_MAX ? 0 : minLen;
    }
};