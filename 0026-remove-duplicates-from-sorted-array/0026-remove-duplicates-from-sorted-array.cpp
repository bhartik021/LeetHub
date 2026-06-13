class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int unique = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != nums[i-1]) {
            nums[unique] = nums[i];
            unique++;
        }
    }    
    return unique;
    }
};