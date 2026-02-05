class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
    map<char, int>mp; 
    for(char c : magazine) {
        mp[c]++;
    }

    for(char c : ransomNote) {
        mp[c]--;
        if(mp[c] < 0) return false;
    }
    return true;
    }
};