class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    vector<int>ans;
    unordered_map<int, int>mp;
    for(int num : nums) {
        mp[num]++;
    }   

    for(auto x : mp){
        if(x.second > (nums.size() / 3)) 
        ans.push_back(x.first);
    }

    return ans;
    }
};