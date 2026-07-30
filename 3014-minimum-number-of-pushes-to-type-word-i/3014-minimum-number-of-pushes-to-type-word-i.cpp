class Solution {
public:
    int minimumPushes(string word) {
    // t.c => 0(N) , S.C.=> O(1)
    int ans = 0;
    for(int i = 0; i < word.size(); i++) {
        ans += i / 8 + 1;
    }  
    return ans;  
    }
};