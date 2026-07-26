class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int l = 0, r = 0;
    while(l < g.size() && r < s.size()) {
        if(g[l] <= s[r]) {
            l++;
        }
        r++;
    }    
    return l;
    }
};

// children cookie
// 1 2 3 4  1 3 3
// 1        1 
// l        r
// l++      r++
// 2        3
// l++      r++
// 3        3 
// l++      r++ 
// 4 stop
