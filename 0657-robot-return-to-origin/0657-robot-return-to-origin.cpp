class Solution {
public:
    bool judgeCircle(string moves) {
    // tc -> O(n) sc -> O(1)
    // do left and right cancel each other
    // do up and down cancel each other
    int x = 0, y = 0;
    for(char c : moves) {
        if(c == 'R') x++;
        else if(c == 'L') x--;
        else if(c == 'U') y++;
        else if(c == 'D') y--;
    }    
    return x == 0 && y == 0;
    }
};