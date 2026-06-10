class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
    int l = 0, r = 0, blank = 0;
    for(char c : moves) {
        if(c == 'L') l++;
        else if(c == 'R') r++;
        else if(c == '_') blank++;
    }  
    return abs(l - r) + blank;  
    }
};