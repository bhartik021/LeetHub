class Solution {
public:
    string frequencySort(string s) {
    unordered_map<char, int>mp;
    for(char c : s) {
        mp[c]++;
    }    
    
    priority_queue<pair<int, char>>maxHeap;

    for(auto it : mp) {
        char ch = it.first;
        int freq = it.second;

        maxHeap.push({freq, ch});
    }

    string result = "";
    while(!maxHeap.empty()) {
        int freq = maxHeap.top().first;
        char ch = maxHeap.top().second;

        maxHeap.pop();

        result += string(freq, ch);
    }
    return result;
    }
};