class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int count = 0, ans = 0;
    for(int num : nums) {
        if(num == 0) {
            count = 0;
        } else {
            count++;
        }
        if(ans < count) {
            ans = count;
        }
    }  
    return ans;  
    }
};