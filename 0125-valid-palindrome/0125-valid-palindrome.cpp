class Solution {
public:
    bool isPalindrome(string s) {
    string clean = "";
    for(char c : s) {
        if(isalnum(c)) {
            clean += tolower(c);
        }
    }    

    int n = clean.size();

    for(int i = 0; i < n/2; i++) {
        if(clean[i] != clean[n-1-i]) {
            return false;
        }
    }
    return true;
    }
};