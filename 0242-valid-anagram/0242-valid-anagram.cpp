class Solution {
public:
    bool isAnagram(string s, string t) {
    if(s.size() != t.size()) return false;
    unordered_map<char, int>mp;
    for(char ss : s) {
        mp[ss]++;
    }    

    for(char tt : t) {
        mp[tt]--;
        if(mp[tt] < 0) return false;
    } 

    return true;
    }
};