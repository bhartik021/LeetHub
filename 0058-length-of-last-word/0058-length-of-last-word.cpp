class Solution {
public:
    int lengthOfLastWord(string s) {
    // int count = 0;
    // for(char i = 0; i < s.size(); i++) {
    //     if(s[i] == ' ') {
    //         count = 0;
    //     }else {
    //         count++;
    //     }
    // }    
    // return count;
    int length = 0;
    int count = 0;
    for(char c : s) {
        if(c == ' ') {
            if(count > 0) {
                length = count;
                count = 0;
            }
        } else {
            count++;
        }
    }
    return count > 0 ? count : length;
    }
};