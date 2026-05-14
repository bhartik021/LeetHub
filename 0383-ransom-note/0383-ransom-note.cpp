class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int>mp;
    for(char m : magazine) {
        mp[m]++;
    }  

    for(char r : ransomNote) {
        mp[r]--;
        if(mp[r] < 0) return false;
    }  

    return true;
    }
};