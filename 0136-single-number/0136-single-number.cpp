class Solution {
public:
    int singleNumber(vector<int>& nums) {
    // unordered_map<int, int>mp;
    // for(int num : nums) {
    //     mp[num]++;
    // }

    // for(auto m : mp) {
    //     if(m.second == 1) return m.first;
    // }

    // return -1;


    int ans = 0;
    for(int num : nums) {
        ans ^= num;
    }    
    return ans;
    }
};