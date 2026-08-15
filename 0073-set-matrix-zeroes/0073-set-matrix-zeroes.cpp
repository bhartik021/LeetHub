class Solution {
public:
    // void markRow(vector<vector<int>>&matrix, int row) {
    //     for(int j = 0; j < matrix[0].size(); j++) {
    //         if(matrix[row][j] != 0) {
    //             matrix[row][j] = -1;
    //         }
    //     }
    // }

    // void markCol(vector<vector<int>>&matrix, int col) {
    //     for(int i = 0; i < matrix.size(); i++) {
    //         if(matrix[i][col] != 0) {
    //             matrix[i][col] = -1;
    //         }
    //     }
    // }

    // void setZeroes(vector<vector<int>>& matrix) {
    // O(n x m) X O(n + m) somehere n^3
    // int n = matrix.size();
    // int m = matrix[0].size();

    // // traverse whole matrix find where are the 0
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < m; j++) {
    //         if(matrix[i][j] == 0) {
    //             markRow(matrix, i);
    //             markCol(matrix, j);
    //         }
    //     }
    // }   

    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < m; j++) {
    //         if(matrix[i][j] == -1) {
    //             matrix[i][j] = 0;
    //         }
    //     }
    // } 
    // }

    void setZeroes(vector<vector<int>>& matrix) {
        // t.c => O(nxm)
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int>row(n, 0);
        vector<int>col(m, 0);

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(row[i] == 1 || col[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};