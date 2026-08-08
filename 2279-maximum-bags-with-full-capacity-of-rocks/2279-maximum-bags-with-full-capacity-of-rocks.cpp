class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
    // will store the empty spaces in each bag by finding the difference b/w current capacity - occupied capacity
    vector<int>vacancy(capacity.size());  

    for(int i = 0; i < capacity.size(); i++) {
        vacancy[i] = capacity[i] - rocks[i];
    }  

    // will sort vacancy array
    sort(vacancy.begin(), vacancy.end());

    // maximum fullCapacityBags that needs to be return
    int fullCapacityBags = 0;

    for(int i = 0; i < vacancy.size(); i++) {
        if(vacancy[i] == 0) {
            fullCapacityBags++;
        } else if(additionalRocks >= vacancy[i]) {
            additionalRocks -= vacancy[i];
            fullCapacityBags++;
        } else {
            break;
        }
    }
    return fullCapacityBags;
    }
};