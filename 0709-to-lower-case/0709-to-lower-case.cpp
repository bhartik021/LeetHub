class Solution {
public:
    string toLowerCase(string s) {
    string result;
    for(char c : s) {
        result += tolower(c);
    }
    return result;    
    }
};