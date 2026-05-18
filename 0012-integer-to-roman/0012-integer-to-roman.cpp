class Solution {
public:
    string intToRoman(int num) {
    // unordered_map<char, int> mp = {
    //     {'I', 1},
    //     {'V', 5},
    //     {'X', 10},
    //     {'L', 50},
    //     {'C', 100},
    //     {'D', 500}, 
    //     {'M', 1000}
    // }    

    map<int, string, greater<int>> mp = {
        {1000, "M"},
        {900, "CM"},
        {500, "D"},
        {400, "CD"},
        {100, "C"},
        {90, "XC"},
        {50, "L"},
        {40, "XL"},
        {10, "X"},
        {9, "IX"},
        {5, "V"}, 
        {4, "IV"},
        {1, "I"}
    };

    string result = "";

    for(auto it : mp) {
        int value = it.first;
        string symbol = it.second;

        while(num >= value) {
            result += symbol;
            num -= value;
        }
    }
    return result;
    }
};