class Solution {
public:
    bool isTrionic(vector<int>& nums) {
    if (nums.size() < 4) return false;
    int state = 0;
    for(int i = 0; i < nums.size() - 1; i++) {
        if(state == 0) {
            if(nums[i] < nums[i+1]) {
                // element increasing
            } else if(i > 0 && nums[i] > nums[i+1]) {
                state = 1; // peak
            } else {
                return false;
            }
        } else if(state == 1) {
            if(nums[i] > nums[i+1]) {
                // element decreasing
            } else if(nums[i] < nums[i+1]) {
                state = 2; // valley
            } else {
                return false;
            }
        } else {
            if(nums[i] < nums[i+1]) {
                // again element increasing
            }else {
                return false;
            }
        }
    }
    return state == 2; 
    }
};