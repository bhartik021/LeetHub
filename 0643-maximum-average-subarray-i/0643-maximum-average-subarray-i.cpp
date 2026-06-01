class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    // O(n)^2
    // double maxAvg = -1e9;
    // for(int i = 0; i <= nums.size() - k; i++) {
    //     int sum = 0;
    //     for(int j = i; j < i + k; j++){
    //         sum += nums[j];
    //     }
    //     double avg = (double)sum / k;
    //     maxAvg = max(maxAvg, avg);
    // }    
    // return maxAvg;

    // sliding window
    int sum = 0;
    for(int i = 0; i < k; i++) {
        sum += nums[i];
    }
        int maxSum = sum;
        for(int i = k; i < nums.size(); i++) {
            sum = sum - nums[i - k] + nums[i];
            maxSum = max(sum, maxSum);
        }
    return (double)maxSum/k;
    }
};