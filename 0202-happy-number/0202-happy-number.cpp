class Solution {
public:
    int getNextNumber(int n) {
        int sum = 0;
        while(n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int>seen;
        while(n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);
            n = getNextNumber(n);
        }
        return n == 1;
    }
};