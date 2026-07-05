class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Size of Matrix 
        int rows = matrix.size();
        int cols = matrix[0].size();

        for(int row = 0; row < rows; row++){ // Loop through row

            for(int col = 0; col < cols; col++){ // loop through col

                if(matrix[row][col] == target){ // core logic
                    return true;
                }
            }
        }

        return false;
    }
};