class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
    // each number k reminder ki freq ko map m store krenge    
    unordered_map<int, int>mp;
    for(int num : arr) {
        int rem = num % k;
        if(rem < 0) {
            rem += k;
        }
        mp[rem]++;
    } 

    // checking pairs
    for(auto it : mp) {
        int rem = it.first;

        // case 1 - if rem is 0
        if(rem == 0) {
           if(mp[rem] % 2 != 0) {
            return false;
           } 
        }

        // case 2 - k even and rem = k/2
        else if(2 * rem == k) {
            if(mp[rem] % 2 != 0) {
                return false;
            }
        }

        // case 3 - normal case
        else {
            if(mp[rem] != mp[k - rem]) {
                return false;
            }
        }
    } 

    return true;
    }
};