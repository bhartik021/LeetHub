class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
    // time complexity => O(n)
    // space complexity => O(n)
    vector<vector<int>>result;
    int i = 0, n = intervals.size(); 
    // case 0: no overlaping
    while(i < n && intervals[i][1] < newInterval[0]) {
        result.push_back(intervals[i]);
        i++;
    }    
    // case 1 : overlapping
    while(i < n && intervals[i][0] <= newInterval[1]) {
        newInterval[0] = min(newInterval[0], intervals[i][0]);
        newInterval[1] = max(newInterval[1], intervals[i][1]);
        i++;
    }
    result.push_back(newInterval);

    // case 3
    while(i < n) {
        result.push_back(intervals[i]);
        i++;
    }
    return result;
    }
};