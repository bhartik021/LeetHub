class Solution {
public:
    struct compare{
        bool operator()(pair<int, string>&a, pair<int, string>&b) {

            if(a.first == b.first) {
                return a.second < b.second;
            }
            return a.first > b.first;
        }
    };
    
    vector<string> topKFrequent(vector<string>& words, int k) {
    // freq of words    
    unordered_map<string, int>mp;
    for(string word : words) {
        mp[word]++;
    }   

    // minHeap 
    priority_queue<pair<int, string>,
    vector<pair<int, string>>,
    compare>minHeap;

    for(auto it : mp) {
        minHeap.push({it.second, it.first});
        if(minHeap.size() > k) {
            minHeap.pop();
        }
    }

    // extracting the ans
    vector<string>result;
    while(!minHeap.empty()) {
        result.push_back(minHeap.top().second);
        minHeap.pop();
    }
    reverse(result.begin(), result.end());
    return result;
    }
};