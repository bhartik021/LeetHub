class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
    // t.c => O(nlogn)
    // s.c => O(log n + log m)
    int l = 0, r = 0;
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    while(l < g.size() && r < s.size()) {
        if(g[l] <= s[r]) {
            l++;
        }
        r++;
    }
    return l;
    }
};