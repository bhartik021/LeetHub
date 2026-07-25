class Solution {
public:
    bool isPalindrome(string s) {
    string filteration;
    for(char c : s) {
        if(isalnum(c)) {
            filteration += tolower(c);
        }
    }    

    int left = 0;
    int right = filteration.size() - 1;

    while(left < right) {
        if(filteration[left] != filteration[right]) return false;
        left++;
        right--;
    }
    return true;
    }
};