class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
    unordered_map<int,int> freq, first, last;

    for(int i = 0; i < nums.size(); i++) {
        int x = nums[i];

        freq[x]++;

        if(first.find(x) == first.end())
            first[x] = i;

        last[x] = i;
    } 

    int degree = 0;
    for(auto it : freq)
        degree = max(degree, it.second);

    int ans = nums.size();

    for(auto it : freq) {
        int x = it.first;

        if(freq[x] == degree) {
            ans = min(ans, last[x] - first[x] + 1);
        }
    }

    return ans;
    }
};