class Solution {
public:
    int trap(vector<int>& height) {
    int n = height.size();  
    int water = 0; 

    stack<int> st;    

    for(int i = 0; i < height.size(); i++) {
       while(!st.empty() && height[st.top()] < height[i]) {
        int mid = st.top();
        st.pop();
        if(st.empty()) 
        break;
        int left = st.top();
        int minHeight = min(height[i] - height[mid], height[left] - height[mid]);
        int width = i - left - 1;
        water += minHeight * width;
       } 
       st.push(i);
    }
    return water;
    }
};