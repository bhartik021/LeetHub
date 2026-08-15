class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    unordered_map<int, int>mp;
    vector<int>result;
    int threshold = nums.size() / 3;

    for(int num : nums) {
        mp[num]++;
    }    

    for(auto &m : mp) {
        if(m.second > threshold) {
            result.push_back(m.first);
        }
    }
    return result;
    }
};