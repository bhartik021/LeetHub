class Solution {
public:
    int minElement(vector<int>& nums) {
    int minVal = INT_MAX;
    for(int num : nums) {
        int currentSum = 0;
        while(num > 0) {
            currentSum += num % 10;
            num /= 10;
        }
        minVal = min(currentSum, minVal);
    }    
    return minVal;
    }
};