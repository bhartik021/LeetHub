class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    // will store numbers along with its freq in map
    unordered_map<int, int>mp;
    for(int num : nums) {
        mp[num]++;
    }  

    // will create bucket here of give array size + 1
    vector<vector<int>>bucket(nums.size() + 1);

        // iterate over map and push element in the bucket 
        for(auto it : mp) {
            bucket[it.second].push_back(it.first);
        }

        // will return this vector ans
        vector<int>ans;

        // will taverse over bucket from back side
        for(int i = bucket.size() - 1; i >= 0 && ans.size() < k; i--) {
            for(int num: bucket[i]) {
                ans.push_back(num);
                if(ans.size() == k) break;
            }    
        }
        return ans;
    }
};