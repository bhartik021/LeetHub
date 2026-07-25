class Solution {
public:
    void sortColors(vector<int>& nums) {
    // return sort(nums.begin(), nums.end());
    int low = 0, mid = 0, end = nums.size() - 1;
    while(mid <= end) {
        switch(nums[mid]) {
            case 0:
            swap(nums[low++], nums[mid++]);
            break;

            case 1:
            mid++;
            break;

            case 2:
            swap(nums[mid], nums[end--]);
            break;
        }
    } 
    }
};