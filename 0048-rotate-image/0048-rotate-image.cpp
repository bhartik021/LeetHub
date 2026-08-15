class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // t.c => O(n)^2
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};