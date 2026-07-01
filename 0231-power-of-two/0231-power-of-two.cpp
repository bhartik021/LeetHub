class Solution {
public:
    bool isPowerOfTwo(int n) {
    // if(n <= 0) return false;
    // while(n % 2 == 0) {
    //     n /= 2;
    // }
    // return n == 1;  

    if(n <= 0) return false;
    //Remove the rightmost set bit 
    // number ko pick kia aur number ko and (&) krdia number k previous number ki binary digite (n - 1) se
    return (n & (n - 1)) == 0;
    }
};