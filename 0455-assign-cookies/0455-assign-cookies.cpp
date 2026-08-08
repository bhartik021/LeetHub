class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int left = 0, right = 0;
    while(left < g.size() && right < s.size()) {
        if(g[left] <= s[right]) {
            left++;
        } 
        right++;
    } 
    return left;  
    }
};