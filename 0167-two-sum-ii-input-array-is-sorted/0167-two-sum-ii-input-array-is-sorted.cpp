class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    // O(n)^2
    // for(int i = 0; i < numbers.size() - 1; i++) {
    //     for(int j = i + 1; j < numbers.size(); j++) {
    //         if(numbers[i] + numbers[j] == target) return {i + 1, j + 1};
    //     }
    // }    
    // return {};

    int start = 0, end = numbers.size() - 1;
    while(start < end) {
        int sum = numbers[start] + numbers[end];
        if(sum == target) return {start + 1, end + 1};
        else if(sum > target) end--;
        else start++;
    }
    return {};
    }
};