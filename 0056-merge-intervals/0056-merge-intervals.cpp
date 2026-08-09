class Solution {
public:
    // custom comparator to sort 2D vector based on the start time of eacg interval in assceding order
    static bool compare(const vector<int>&a, const vector<int>&b) {
        return a[0] < b[0];
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    // grredy approach 
    // time complexity => O(n log n)
    // space complexity => O(n)
    // create an vector of merged intervals that needs to be return
    vector<vector<int>>mergedIntervals;

    // will sort intervals based on the start time of each intervals along with custom comparator
    sort(intervals.begin(), intervals.end(), compare);

    // first will push first interval in mergedIntervals vector
    mergedIntervals.push_back(intervals[0]);

    // iterate over the all intervals
    for(int i = 1; i < intervals.size(); i++) {
        int lastIntervalEndingTime = mergedIntervals.back()[1];
        //  if current interval start time is lesser than ending time of previos interval
        if(intervals[i][0] <= lastIntervalEndingTime) {
            mergedIntervals.back()[1] = max(lastIntervalEndingTime, intervals[i][1]);
        }else {
            // if there is no overlaap simply push that interval in mergedIntervals vector
            mergedIntervals.push_back(intervals[i]); 
        }
    }
    return mergedIntervals;
    }
};