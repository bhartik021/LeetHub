class Solution {
public:
    string intToRoman(int num) {
    // using hashmap
    // map<int, string, greater<int>> mp = {
    //     {1000, "M"},
    //     {900, "CM"},
    //     {500, "D"},
    //     {400, "CD"},
    //     {100, "C"},
    //     {90, "XC"}, 
    //     {50, "L"},
    //     {40, "XL"}, 
    //     {10, "X"}, 
    //     {9, "IX"},
    //     {5, "V"}, 
    //     {4, "IV"},
    //     {1, "I"}
    // };

    // string result = "";
    // for(auto it : mp) {
    //     int value = it.first;
    //     string symbol = it.second;

    //     while(num >= value) {
    //         result += symbol;
    //         num -= value;
    //     }
    // }
    // return result;

    vector<int>value={1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string>symbol={"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string result = "";

    for(int i = 0; i < value.size(); i++) {
        while(num >= value[i]) {
            result += symbol[i];
            num -= value[i];
        }
    }
    return result;
    }
};