class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    // time compleixty => O(m log m + n log n)
    int left = m - 1, right = 0;

    while(left >= 0 && right < n) {
        if(nums1[left] > nums2[right]) {
            swap(nums1[left], nums2[right]);
            left--;
            right++;
        }else {
            break;
        }
    }    

    sort(nums1.begin(), nums1.begin() + m);
    sort(nums2.begin(), nums2.end());

    for(int i = 0; i < n; i++) {
        nums1[m + i] = nums2[i];
    }

    }
};