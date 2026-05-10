class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int>mp;
    for(int num : nums) {
        mp[num]++;
    }    

    // minHeap to remove less freq number
    priority_queue<pair<int, int>,
    vector<pair<int, int>>,
    greater<pair<int, int>>> minHeap;

    for(auto it : mp) {
        int number = it.first;
        int freq = it.second;

        minHeap.push({freq, number});

        if(minHeap.size() > k) {
            minHeap.pop();
        }
    }
    // extract ans
    vector<int>ans;
    while(!minHeap.empty()) {
        ans.push_back(minHeap.top().second);
        minHeap.pop();
    }
    return ans;
    }
};