class Solution {
public:
    bool isAnagram(string s, string t) {
    map<char, int>mp;
    
    if(s.size() != t.size()) return false;

    for(auto& ss : s) {
        mp[ss]++;
    }

    for(auto& tt : t) {
        mp[tt]--;
        if(mp[tt] < 0) return false;
    }

    return true;
    }
};