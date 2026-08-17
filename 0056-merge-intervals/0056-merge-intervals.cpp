class Solution {
public:
    static bool compare(const vector<int>&a, const vector<int>&b) {
        return a[0] < b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>>mergeIntervals;
    sort(intervals.begin(), intervals.end(), compare);  
    mergeIntervals.push_back(intervals[0]);
    for(int i = 1; i < intervals.size(); i++) {
        int lastEndingtime = mergeIntervals.back()[1];
        if(intervals[i][0] <= lastEndingtime) {
            mergeIntervals.back()[1] = max(lastEndingtime, intervals[i][1]);
        } else {
            mergeIntervals.push_back(intervals[i]);
        }
    }
    return mergeIntervals;
    }
};