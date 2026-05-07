class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>>mp;
    for(string word : strs) {
        string key = word;
        sort(key.begin(), key.end());
        mp[key].push_back(word);
    }    
    vector<vector<string>>ans;
    for(auto it : mp) {
        ans.push_back(it.second);
    }
    return ans;
    }
};