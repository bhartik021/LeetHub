class Solution {
public:
    // custom comparator which wil sort vector inside vector based on the second element (which is units in a box) in descending order(becuase returing greater value first)
    static bool compare(const vector<int>&a, const vector<int>&b) {
        return a[1] > b[1];
    }

    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
    
    // sort boxTypes along with custom comparator
    sort(boxTypes.begin(), boxTypes.end(), compare);  

    // number of units needs to be return
    int totalUnits = 0; 

    // iterator over the boxTypes vector

    for(auto &box : boxTypes) {
        // box[0] here is box value not unit value
        int numberOfBoxes = box[0];
        // box[1] here number of units in each box
        int numberOfUnits = box[1];

        // how much boxes i can pick here 
        // stroing in take variable with comparison of truckSize becuase of truckSize is less than numberOfBoxes then i cant take all box so in both whatever is minium will that value and store it in take variable
        int take = min(numberOfBoxes, truckSize);

        // after taking numberofboxes , check how many units has been picked along with the boxes
        // number of boxes has been picked will be multiplied by numberofunits and add them in totalunits that needs to be return
        totalUnits += take * numberOfUnits;

        // wil reduce the trucksize space here becuase if size has been occupied 
        truckSize -= take;
        
        // if there is no space in truck will stop
        if(truckSize == 0) break;
    } 

    return totalUnits;
    }
};