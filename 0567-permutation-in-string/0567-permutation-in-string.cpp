class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    int s1len = s1.size(), s2len = s2.size();
    // if s1 is greater
    if (s1len > s2len) return false;

    vector<char>s1hash(26, 0), s2hash(26, 0);
    
    // freq of all s1 character
    for(char c : s1) {
        s1hash[c - 'a']++;
    }

    for(int i = 0; i < s1len; i++) {
        s2hash[s2[i] - 'a']++;
    }  

    if(s1hash == s2hash) return true;

    for(int i = s1len; i < s2len; i++) {
        s2hash[s2[i] - 'a']++;
        s2hash[s2[i - s1len] - 'a']--;

        if(s1hash == s2hash) return true;
    }
    return false;
    }
};