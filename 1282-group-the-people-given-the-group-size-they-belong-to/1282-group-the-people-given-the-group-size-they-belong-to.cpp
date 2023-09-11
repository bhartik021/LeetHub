class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
     unordered_map<int, vector<int>> mp;
        vector<vector<int>> ans;

        for(int i = 0; i < groupSizes.size(); ++i){
            int curr_size = groupSizes[i];
            mp[curr_size].push_back(i);

            if(mp[curr_size].size() == curr_size){
                ans.push_back(mp[curr_size]);
                mp[curr_size].clear();
            }
        }
        return ans;   
    }
};