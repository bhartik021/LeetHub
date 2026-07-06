class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
    unordered_map<int, int>mp;
    vector<int>ans;
    for(int num : nums) {
        mp[num]++;
    }    

    for(auto m : mp) {
        if(m.second == 1){
            ans.push_back(m.first);
        }
    }
    return ans;
    }
};