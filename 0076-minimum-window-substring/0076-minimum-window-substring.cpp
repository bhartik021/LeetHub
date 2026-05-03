class Solution {
public:
    string minWindow(string s, string t) {
    unordered_map<char, int>freqmap;
    for(char c : t) freqmap[c]++;
    int count = t.size();
    int left = 0, right = 0;
    int minLen = INT_MAX, start = -1;
    while(right < s.size()) {
        if(freqmap[s[right]] > 0) {
            count--;
        }
        freqmap[s[right]]--;

        while(count == 0) {
            if(right - left + 1 < minLen) {
                minLen = right - left + 1;
                start = left;
            }

            freqmap[s[left]]++;
            if(freqmap[s[left]] > 0) {
                count++;
            }
            left++;
        }
        right++;
    }
    return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};