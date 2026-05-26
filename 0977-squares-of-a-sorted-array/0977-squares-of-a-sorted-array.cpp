class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    vector<int>ans;
    for(int num : nums) {
        ans.push_back(abs(num * num));
    }    
    sort(ans.begin(), ans.end());
    return ans;
    }
};