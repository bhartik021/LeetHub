class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
    map<char, int>mp;

    for(auto & s : magazine) {
        mp[s]++;
    }    

    for(auto & t : ransomNote) {
        mp[t]--;
        if(mp[t] < 0) return false;
    }

    return true;
    }
};