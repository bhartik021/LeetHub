class Solution {
public:
    // custom comparator to sort the 2D vector based on the ending index in acessnding order
    static bool compare(const vector<int>&a, const vector<int>&b) {
        return a[0] < b[0];
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    // need to be return 
    vector<vector<int>>mergedIntervals;

    // sort all intervals based on the ending time along with custom comparator
    sort(intervals.begin(), intervals.end(), compare);

    // Add the first interval
    mergedIntervals.push_back(intervals[0]);

    // iterate over the intervals vector
    for(int i = 1; i < intervals.size(); i++) {
        // Last interval in our mergedIntervals vector
        int lastEnd = mergedIntervals.back()[1];

        // if current interval overlaps
        if(intervals[i][0] <= lastEnd) {
            // extend the ending time of previous interval
            mergedIntervals.back()[1] = max(lastEnd, intervals[i][1]);
        }else {
            // if there is no overlap will push interval in mergedIntervals vector
            mergedIntervals.push_back(intervals[i]);
        }
    }
    return mergedIntervals;
    }
};