class Solution {
public:
    int countGoodSubstrings(string s) {
    // a very basic problem using set to store all 3 unique characters in a single substring
    int count = 0;
    // if substring is less then 3 which is a basic requirmenet to return the ans then we will reutrn 0
    if(s.size() < 3) return 0;

    for(int i = 0; i <= s.size() - 3; i++) {
        unordered_set<char>seen;
        // will insert all 3 chracters if they are unique for particular substring of 3 length
        seen.insert(s[i]);
        seen.insert(s[i + 1]);
        seen.insert(s[i + 2]);

        // as soon our set size is equal to 3 will increase the count for each substring
        if(seen.size() == 3) count++;

    }    

    return count;
    }
};