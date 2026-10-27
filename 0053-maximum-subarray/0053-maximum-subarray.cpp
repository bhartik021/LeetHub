class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    // brute force => O(n^2)
    // int maxi = INT_MIN;
    // for(int i = 0; i < nums.size(); i++) {
    //     int sum = 0;
    //     for(int j = i; j < nums.size(); j++) {
    //         sum += nums[j];
    //         maxi = max(maxi, sum);
    //     }
    // }  
    // return maxi;  

    // kadane' algo => O(n)

    // If the previous running sum is negative, it will only decrease the sum, so start fresh.
    // Otherwise, continue adding elements to the current subarray.
    // Keep track of the maximum sum found so far.
    
    int maxi = INT_MIN;
    int sum = 0;
    for(int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        maxi = max(maxi, sum);
        if(sum < 0) sum = 0;
    }
    return maxi;
    }
};