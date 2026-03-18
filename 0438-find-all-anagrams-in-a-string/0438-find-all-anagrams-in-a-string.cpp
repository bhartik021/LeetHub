class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
    vector<int>ans;

    if(p.size() > s.size()) return ans;

    vector<int>p_freq(26, 0);
    vector<int>window_freq(26, 0);

    for(int i = 0; i < p.size(); i++) {
        p_freq[p[i] - 'a']++;
        window_freq[s[i] - 'a']++;
    }

    if(p_freq == window_freq) ans.push_back(0);

    for(int i = p.size(); i < s.size(); i++) {
        window_freq[s[i - p.size()] - 'a']--;
        window_freq[s[i] - 'a']++;

        if(p_freq == window_freq) ans.push_back(i - p.size() + 1);
    } 
    return ans;
    }
};