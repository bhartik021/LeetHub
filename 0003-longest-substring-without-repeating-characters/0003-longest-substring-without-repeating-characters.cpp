class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    // O(n)
    vector<int>freq(256, 0);
    int left = 0;
    int maxLen = 0;
    for(int i = 0; i < s.size(); i++) {
        freq[s[i]]++;
        // duplicates found
        while(freq[s[i]] > 1) {
            freq[s[left]]--;
            left++;
        }
        maxLen = max(maxLen, i - left + 1);
    }
    return maxLen;
    // unordered_set<char>ch;
    // int left = 0, maxLen = 0;
    // for(int i = 0; i < s.size(); i++) {
    //     while(ch.find(s[i]) != ch.end()) {
    //         ch.erase(s[left]);
    //         left++;
    //     }
    //     ch.insert(s[i]);
    //     maxLen = max(maxLen, i - left + 1);
    // }    
    // return maxLen;
    }
};