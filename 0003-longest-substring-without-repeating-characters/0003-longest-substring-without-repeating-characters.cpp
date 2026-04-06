class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    unordered_set<char>ch;
    int left = 0, maxLen = 0;
    for(int i = 0; i < s.size(); i++) {
        while(ch.find(s[i]) != ch.end()) {
            ch.erase(s[left]);
            left++;
        }
        ch.insert(s[i]);
        maxLen = max(maxLen, i - left + 1);
    }    
    return maxLen;
    }
};