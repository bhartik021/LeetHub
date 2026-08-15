class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    // for(int i = 0; i < matrix.size(); i++) {
    //     for(int j = 0; j < matrix[0].size(); j++) {
    //         if(matrix[i][j] == target) {
    //             return true;
    //         }
    //     }
    // }    
    // return false;
    //}

    // t.c => O(log m  x n)
    int n = matrix.size();
    int m = matrix[0].size();

    int left = 0;
    int right = m * n - 1;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        // ultimately in 2d matrix the mid coordinates will be extratced bt this formula to find row anf col 
        int row = mid / m; // for row number will divide mid by number of col
        int col = mid % m; // for col number will divide mid by number of col

        if(matrix[row][col] == target) {
            return true;
        }else if(matrix[row][col] > target) {
            right = mid - 1;
        }else {
            left = mid + 1;
        }
    }
    return false;
    }
};