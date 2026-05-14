class Solution {
public:
    int majorityElement(vector<int>& nums) {
    unordered_map<int, int>mp;
    for(int num : nums) {
        mp[num]++;
        if(mp[num] > (nums.size() / 2)) return num;
    }  
    return -1;
    }
};