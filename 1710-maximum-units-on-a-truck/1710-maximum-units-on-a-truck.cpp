class Solution {
public:
    // comparator basically to compare vectors inside the boxTypes vector based on the units (which is second element of vector) and 1 is basically denoting the second element which is greated we are returning that
    static bool compare(const vector<int>& a, const vector<int>& b) {
        return a[1] > b[1];
    }

    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

    // here we are sorting boxes with our compartor fun above
    sort(boxTypes.begin(), boxTypes.end(), compare);   

    // total units needs to be return
    int totalUnits = 0; 

    for(auto & box : boxTypes) {
        int numberOfBoxes = box[0];
        int numberOfUnits = box[1];

        int take = min(numberOfBoxes, truckSize);

        totalUnits += take * numberOfUnits; 

        truckSize -= take;

        if(truckSize == 0) break;
    }

    return totalUnits;
    }
};