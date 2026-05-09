class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    // finding freq
    unordered_map<int, int>mp;
    for(int num : nums) {
        mp[num]++;
    }    

    // min heap to remove smallest
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>minHeap;
    
    for(auto it : mp) {
        int number = it.first;
        int freq = it.second;

        minHeap.push({freq, number});

        if(minHeap.size() > k) {
            minHeap.pop();
        }
    }

    // finding actual top k frequent element
    vector<int>ans;
    while(!minHeap.empty()) {
        ans.push_back(minHeap.top().second);
        minHeap.pop();
    }
    return ans;
    }
};