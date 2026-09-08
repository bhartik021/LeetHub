class Solution {
public:
    bool isPalindrome(int x) {
    if(x < 0) return false;
    long int ans = 0;
    int temp = x;
    while(temp != 0) {
        // access last digit
        int digit = temp % 10;
        ans = ans * 10 + digit;
        temp /= 10;
    }    
    if(ans == x) return true;
    return false;
    }
};