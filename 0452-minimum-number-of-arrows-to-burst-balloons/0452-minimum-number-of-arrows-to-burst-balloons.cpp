class Solution {
public:
    // custom comparator to sort 2D vector based on the ending index in asscending order
    static bool compare(const vector<int>&a, const vector<int>&b) {
        return a[1] < b[1];
    }

    int findMinArrowShots(vector<vector<int>>& points) {
    // greedy approach 
    // time complexity => O(n log n)
    // space complexity => O(1)   

    // if there are no poitns simply no number of arrows needed to burst ballons so would return 0

    if(points.size() == 0) return 0;

    // first we will sort the all points based on the ending index along with custom comparator fun
    sort(points.begin(), points.end(), compare);

    // 1 arrows always be needed to burst the ballon
    int numberOfArrowsNeeded = 1;
    // ending point of each point to check if there is no overlap with next point of starting point, it will be initialized with first point endiing point
    int endingPoint = points[0][1];

    // iterate over the points vector from 1 index becuase we have intialized endpoint with first point ending point and arrow is also 1
    for(int i = 1; i < points.size(); i++) {
        if(points[i][0] > endingPoint) {
            numberOfArrowsNeeded++;
            endingPoint = points[i][1];
        }
    }
    return numberOfArrowsNeeded;
    }
};