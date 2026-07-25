class Solution {
public:
    int binarySearch(vector<int>&nums, int target, bool isSearchingLeft) {
        int indx = -1;
        int left = 0, right = nums.size() - 1;
        while(left <= right) {
        int mid = left + (right - left) / 2;
        if(nums[mid] > target) {
            right = mid - 1;
        }else if(nums[mid] < target) {
            left = mid + 1;
        }else {
            indx = mid;
            if(isSearchingLeft) {
                right = mid - 1;
            }else {
                left = mid + 1;
            }
        }
    } 
    return indx;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
    vector<int>result = {-1, -1};
    int left = binarySearch(nums, target, true);
    int right = binarySearch(nums, target, false);

    result[0] = left;
    result[1] = right;
    return result;   
    }
};