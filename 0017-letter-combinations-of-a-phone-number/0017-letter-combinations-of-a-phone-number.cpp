class Solution {
public:
    // will return ans with this vector
    vector<string>ans;

    vector<string> letterCombinations(string digits) {
    
    // base case 
    if(digits.empty()) {};
    
    vector<string>mp = {
        "", 
        "",
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz"
    };

    string current = "";

    backtrack(0, digits, current, mp);   

    return ans; 

    }

    void backtrack(int index, string &digits, string &current, vector<string>&mp){
        if(digits.size() == index) {
            ans.push_back(current);
            return;
        }

        string letters = mp[digits[index] - '0'];

        for(char ch : letters) {

            current.push_back(ch);

            backtrack(index + 1, digits, current, mp);

            current.pop_back();
        }
    }
};