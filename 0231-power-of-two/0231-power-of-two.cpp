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
    return (n & (n - 1)) == 0;
    }
};