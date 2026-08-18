class Solution {
public:
    int countGoodSubstrings(string s) {
    int count = 0;
    if(s.size() < 3) return 0;
    for(int i = 0; i <= s.size() - 3; i++) {
        unordered_set<char>st;
        st.insert(s[i]);
        st.insert(s[i + 1]);
        st.insert(s[i + 2]);

        if(st.size() == 3) {
            count++;
        }
    }    
    return count;
    }
};

// aababcabc
// abc
// bca
// cab
// abc
