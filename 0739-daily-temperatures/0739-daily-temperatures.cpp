class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
    vector<int>result;
    stack<int>s;
    for(int i = temperatures.size() - 1; i >= 0; i--) {
        if(s.empty()) {
            s.push(i);
            result.push_back(0);
        }else {
            while(!s.empty() && temperatures[i] >= temperatures[s.top()]) {
                s.pop();
            }
        if(s.empty()) {
            s.push(i);
            result.push_back(0);
        }else {
            result.push_back(s.top() - i);
            s.push(i);
        }
        }
    }    
    reverse(result.begin(), result.end());
    return result;
    }
};