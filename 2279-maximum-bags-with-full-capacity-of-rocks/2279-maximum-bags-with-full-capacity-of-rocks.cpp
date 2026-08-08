class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
    // maximum number of full capacity bags
    int fullCapacityMaximumBags = 0;

    // will store number of space remaining in each bag
    vector<int>vacancy(capacity.size()); 

    // iterate over the capacity array to find how much space is remaining in current bag

    for(int i = 0; i < capacity.size(); i++) {
        // will find the differenc b/w whole space - current occupied space
        vacancy[i] = capacity[i] - rocks[i]; 
    }  

    // now we will sort the vacancy array
    sort(vacancy.begin(), vacancy.end());

    // iterate over the vacancy array to find which can be fullfill
    for(int i = 0; i < vacancy.size(); i++) {
        // case 1 : if vacancy is aleday full then it is already have fullcapacity no additionalrocks can be added here 
        if(vacancy[i] == 0) {
            fullCapacityMaximumBags++;
        // case 2 : if additionalRocks is greater than current vacancy[i] only then it can go inside vacancy[i]
        }else if(additionalRocks >= vacancy[i]) {
            // will also remove current space form vacancy whatever additionalRocks we have put in vacancy[i]
            additionalRocks -= vacancy[i];
            // increase the fullCapacityMaximumBags count
            fullCapacityMaximumBags++;
        // case 3 : id there is no additionalRocks there is nothing to be assigned in the vancancy
        }else {
            break;
        }  
    }
    return fullCapacityMaximumBags;
    }
};