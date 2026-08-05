class Solution {
public:
    int findComplement(int num) {
    if(num == 0) return 1;
    int mask = 0;
    // whenver number bit count is equal to mask bit count , while loop will stop and i will found my mask number 
    while(mask < num) {
        // to mask number will left shift the current value by 1 and make a OR with it
        mask = (mask << 1) | 1;
    }    
    // return complement of mask with n
    return mask ^ num;
    }
};