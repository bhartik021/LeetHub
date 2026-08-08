class Solution {
public:
    static bool compare(const vector<int>&a, const vector<int>&b) {
        return a[1] < b[1];
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    // greedy approach
    // will sort intervals based on the end time of each interval
    sort(intervals.begin(),intervals.end(), compare);  

    int count = 1;
    int lastEndingTime = intervals[0][1];

    for(int i = 0; i < intervals.size(); i++) {
        if(intervals[i][0] >= lastEndingTime) {
            count++;
            lastEndingTime = intervals[i][1];
        }
    } 

    return intervals.size() - count; 
    }
};