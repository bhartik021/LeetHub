class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int>num1set(nums1.begin(), nums1.end());
    unordered_set<int>result;
    for(int num : nums2) {
        if(num1set.count(num)) 
        result.insert(num);
    }    
    return vector<int>(result.begin(), result.end());
    }
};