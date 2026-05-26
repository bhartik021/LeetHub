class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
    int ans = 0;
    for(auto customer : accounts) {
        int sum = 0;
        for(int money : customer) {
            sum += money;
        }
        ans = max(sum, ans);
    }  
    return ans; 
    }
};