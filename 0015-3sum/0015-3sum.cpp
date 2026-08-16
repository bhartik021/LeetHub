class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    // t.c => O(n^3 + logn )
    // s.c =>O(n^3)
    // set<vector<int>>ans;
    // for(int i = 0; i < nums.size(); i++) {
    //     for(int j = i + 1; j < nums.size(); j++) {
    //         for(int k = j + 1; k < nums.size(); k++) {
    //             if((nums[i] + nums[j] + nums[k]) == 0) {
    //                 vector<int>triplets = {nums[i], nums[j], nums[k]};
    //                 sort(triplets.begin(), triplets.end());
    //                 ans.insert(triplets);
    //             }
    //         }
    //     }
    // }  
    // vector<vector<int>>result(ans.begin(), ans.end());
    // return result;

    // t.c => O(n^2 logn n)
    // s.c. =>O(n)
    // set<vector<int>>ans;
    // for(int i = 0; i < nums.size(); i++) {
    //     set<int>hashset;
    //     for(int j = i + 1; j < nums.size(); j++) {
    //         int third  = - (nums[i] + nums[j]);
    //         if(hashset.find(third) != hashset.end()) {
    //             vector<int>triplets = {nums[i], nums[j], third};
    //             sort(triplets.begin(), triplets.end());
    //             ans.insert(triplets);
    //         }
    //         hashset.insert(nums[j]);
    //     }
    // }
    // vector<vector<int>>result(ans.begin(), ans.end());
    // return result;

    // t.c => O(n nlogn)
    //s.c =>(n)
    vector<vector<int>>result;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++) {
        if(i > 0 && nums[i] == nums[i - 1]) continue;
        int j = i + 1;
        int k = nums.size() - 1;
        while(j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if(sum < 0) {
                j++;
            }else if(sum > 0) {
                k--;
            }else {
                vector<int>triplets = {nums[i], nums[j], nums[k]};
                result.push_back(triplets);
                j++;
                k--;
                while(j < k && nums[j] == nums[j - 1])  j++;
                while(j < k && nums[k] == nums[k + 1]) k--;
            }
        }
    }
    return result;
    }
};