class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
    int count = 0;
    unordered_set<char>jset;
    for(char j : jewels) {
        jset.insert(j);
    }

    for(char s : stones) {
        if(jset.count(s)) count++;
    }
    return count;
    }
};