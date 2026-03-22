class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    unordered_set<char>chr;
    int left = 0;
    int len = 0;
    for(int i = 0; i < s.size(); i++) {
        while(chr.find(s[i]) != chr.end()) {
            chr.erase(s[left]);
            left++;
        }
        chr.insert(s[i]);
        len = max(len, i - left + 1);
    }    
    return len;
    }
};