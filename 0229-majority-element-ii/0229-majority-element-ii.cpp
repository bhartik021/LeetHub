class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    // time complexity => O(n)
    // space complexity => O(n)
    vector<int>result;
    int threshold = nums.size() / 3;
    unordered_map<int, int>mp;
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