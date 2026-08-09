class Solution {
public:
    // custom comparator to sort based on ending index
    static bool compare(const vector<int>&a , const vector<int>&b) {
        return a[1] < b[1];
    }

    int findMinArrowShots(vector<vector<int>>& points) {
    if(points.size() == 0) return 0;

    // sort based on end index along with comparator function
    sort(points.begin(), points.end(), compare); 

    int needArrows = 1;
    int endingPoint = points[0][1];

    for(int i = 1; i < points.size(); i++) {
        if(points[i][0] > endingPoint) {
            needArrows++;
            endingPoint = points[i][1];
        }
    }  
    return needArrows; 
    }
};