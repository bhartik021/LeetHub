class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
    sort(bills.begin(), bills.end());
    int five = 0, ten = 0;
    for(int i = 0; i < bills.size(); i++) {

        if(bills[i] == 5) {
            five++;
        }
        
        else if(bills[i] == 10) {
            if(five > 0) {
                ten++;
                five--;
            }else {
                return false;
            }
        }
        
        else if(bills[i] == 20){
            if(five > 0 && ten > 0) {
                ten--;
                five--;
            }else if(five >= 3) {
                five -= 3;
            }else {
                return false;
            }
        }
    }   

    return true; 
    }
};