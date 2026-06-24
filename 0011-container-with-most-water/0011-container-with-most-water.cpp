class Solution {
public:
    int maxArea(vector<int>& height) {
    int start = 0, end = height.size() - 1, maxWater = 0;
    while(start < end) {
        int width = end - start;
        int h = min(height[start], height[end]);
        int area = h * width;
        maxWater = max(area, maxWater);
        if(height[start] < height[end]) {
            start++;
        } else {
            end--;
        }
    } 
    return maxWater;   
    }
};