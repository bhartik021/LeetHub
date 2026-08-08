class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
    // time complexity => O(n)
    int five = 0, ten = 0;
    for(int i = 0; i < bills.size(); i++) {
        // case 1 : if the bill is 5 , i'll take 5
        if(bills[i] == 5) five++;

        // case 2 : if the bill is 10 then i'll take 10 and reduce 5 from 5
        else if(bills[i] == 10) {
            if(five > 0) {
                five--;
                ten++;
            } else {
                return false;
            }

        // case 3 : if the bill is 20 then 
        }else if(bills[i] == 20) {
            // either i should  have conbination of 5 and 10 , in the case i give 1 -> 10 and 1 -> 5
            if(five > 0 && ten > 0) {
                five--;
                ten--;
            // and if i have 3+ fives then i'll give 3 five and reduce 3 fives from fives not more than that
            }else if (five >= 3) {
                five -= 3;
            }else {
                return false;
            }
        }
    }    
    return true;
    }
};