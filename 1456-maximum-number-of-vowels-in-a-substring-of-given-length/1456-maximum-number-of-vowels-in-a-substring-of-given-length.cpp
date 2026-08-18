class Solution {
public:

    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || 
               ch == 'i' || ch == 'o' || 
               ch == 'u';
    }

    int maxVowels(string s, int k) {
        int count = 0;

        // first window
        for(int i = 0; i < k; i++) {
            if(isVowel(s[i])) {
                count++;
            }
        }

        int ans = count;

        // sliding window
        for(int i = k; i < s.size(); i++) {

            // removing prevous char
            if(isVowel(s[i - k])) {
                count--;
            }

            // adding new char
            if(isVowel(s[i])) {
                count++;
            }

            ans = max(ans, count);
        }

    return ans;
    }
};

// abciiidef
// abc
// bci
// cii
// iii
// iid
// ide
// def
// max ans 3 len

// aeiou
// ae
// ei
// io
// ou
// max ans 2 len