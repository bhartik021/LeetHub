class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
    // greedy approach
    // time complexity => O(n)
    // space complexity => O(n)
    vector<vector<int>> result;
    int i = 0, n = intervals.size();  
    // case 1 : the left part of the intervals
    while(i < n && intervals[i][1] < newInterval[0]) {
        result.push_back(intervals[i]);
        i++;
    }  

    // case 2 : the mid part where intervals are overlapping with newintervals
    while(i < n && intervals[i][0] <= newInterval[1]) {
        newInterval[0] = min(intervals[i][0], newInterval[0]);
        newInterval[1] = max(intervals[i][1], newInterval[1]);
        i++;
    }
    result.push_back(newInterval);

    // case 3 : the right part as it as
    while(i < n) {
        result.push_back(intervals[i]);
        i++;
    }
    return result;
    }
};