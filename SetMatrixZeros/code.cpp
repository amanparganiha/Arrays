class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return;
        int n = matrix.size();
        int m = matrix[0].size();

        int col0 = 1; // marker for first column
        
        // First pass: set markers in first row and column
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                    // Mark this row (use first column)
                    matrix[i][0] = 0;
                    
                    // Mark this column (use first row, except for j=0)
                    if(j == 0){
                        col0 = 0;
                    } else {
                        matrix[0][j] = 0;
                    }
                }
            }
        }
        
        // Second pass: set zeros based on markers (skip first row/column)
        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        
        // Handle first row
        if(matrix[0][0] == 0){
            for(int j = 0; j < m; j++){
                matrix[0][j] = 0;
            }
        }
        
        // Handle first column
        if(col0 == 0){
            for(int i = 0; i < n; i++){
                matrix[i][0] = 0;
            }
        }
    }
};
