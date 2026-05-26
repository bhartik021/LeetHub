class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    // using vector
    // vector<int>ans;
    // for(int num : nums) {
    //    ans.push_back(num * num);
    // }    
    // sort(ans.begin(), ans.end());
    // return ans;

    // inplace    
    for(int i = 0; i < nums.size(); i++) {
       nums[i] = nums[i] * nums[i];
    }    
    sort(nums.begin(), nums.end());
    return nums;
    }
};