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
    for(int i = 0; i < 32; i++) {
        int count = 0;
        for(int num : nums) {
            if(num & (1 << i)) {
                count++;
            }
        }
        if(count % 3) {
            ans |= (1 << i);
        }
    }
    return ans;
    }
};