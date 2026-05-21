class Solution {
public:
    long long countPairs(vector<int>& nums, int k) {
    unordered_map<int, int>mp;
    long long count = 0;
    for(int num : nums) {
        int currentGCD = gcd(num, k);
        for(auto it : mp) {
            int prevGCD = it.first;
            int freq = it.second;
            if((1LL * currentGCD * prevGCD) % k == 0) {
                count += freq;
            }
        }
        mp[currentGCD]++;
    }   
    return count; 
    }
};