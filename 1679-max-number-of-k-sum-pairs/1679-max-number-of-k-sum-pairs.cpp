class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
    // with soritng O(n log n)
    // sort(nums.begin(), nums.end());
    // int start = 0, end = nums.size() - 1;
    // int count = 0;
    // while(start < end) {
    //     int sum = nums[start] + nums[end];
    //     if(sum == k) {
    //         count++;
    //         start++;
    //         end--;
    //     }else if(sum > k) {
    //         end--;
    //     }else {
    //         start++;
    //     }
    // }    
    // return count;

    unordered_map<int, int>mp;
    int count = 0;
    for(int num : nums) {
        int need = k - num;
        if(mp[need] > 0) {
            count++;
            mp[need]--;
        }else {
            mp[num]++;
        }
    }
    return count;
    }
};