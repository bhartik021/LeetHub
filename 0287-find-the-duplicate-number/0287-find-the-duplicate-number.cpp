class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    unordered_map<int, int>mp;
    for(int num : nums) {
        mp[num]++;
    }    

    for(auto &m : mp) {
        if(m.second > 1) {
            return m.first;
        }
    }
    return -1;
    }
};