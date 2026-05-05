class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    unordered_set<int>st(nums.begin(), nums.end());
    int longest = 0;
    for(int num : st) {
        if(st.count(num-1) == 0) {
            int current = num;
            int count = 1;
            while(st.count(current+1)) {
                current++;
                count++;
            }
            longest = max(longest, count);
        }
    }    
    return longest;
    }
};