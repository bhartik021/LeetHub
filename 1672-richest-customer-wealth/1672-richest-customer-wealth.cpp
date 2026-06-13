class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
    int ans = 0;
    for(auto customers : accounts) {
        int sum = 0;
        for(int money : customers) {
            sum += money;
        }
        ans = max(sum, ans); 
    }  
    return ans;
    }
};