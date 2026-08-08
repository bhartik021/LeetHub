class Solution {
public:
    // comparator to sort the intervals based on the end time
    static bool compare(const vector<int>&a, const vector<int>&b) {
        return a[1] < b[1];
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    // greedy approch , t.c => O(n log n + n) , s.c => O(1)

    // sort the intevrals array based on the end time along with comparator
    sort(intervals.begin(), intervals.end(), compare); 

    // count to store how many meetings can be attended , also first meeting will be always attended so count wll be 1
    int count = 1;

    // it will store last meeting end time of each interval so that we can check there is no overlap of upcoming start time
    // also at first we will store first interval
    int lastEndingTime = intervals[0][1];

    // iterate over the intervals
    for(int i = 1; i < intervals.size(); i++) {
        // if last meeting end time is less than of equal to next interval start time will increaed the counter
        if(intervals[i][0] >= lastEndingTime) {
            count++;
            // also last meeting time will be updated with next intervals end time
            lastEndingTime = intervals[i][1];
        }
    } 
    // at the end will return subtraction of overall meetiings and total meeting attented // so that we can get number of not attenting meetings
    return intervals.size() - count;  
    }
};