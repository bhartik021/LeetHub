class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    // will use bucker sort here for  O(n log n ) time complexity
    // first will create map to store number along with its freq
    unordered_map<int, int>mp;
    for(int num : nums) {
        mp[num]++;
    } 

    // now will create bucket here to store the number on its index (which is equal to freq of its number) this will be of array size + 1
    vector<vector<int>> bucket(nums.size() + 1);
    // will iterate over the map to store the element in bucker 
    for(auto it : mp) {
        bucket[it.second].push_back(it.first);
    }

    // will create vector to returnt the output
    vector<int>ans;
    // will iterate over bucket from back side till 0th and will stop till k size
    for(int i = bucket.size() - 1; i >= 0 && ans.size() < k; i--) {
        for(int num : bucket[i]) {
            ans.push_back(num);
            // if return vector size is equal to k will stop to push element in the ans vector
            if(ans.size() == k) break;
        } 
    }
    return ans;
    }
};