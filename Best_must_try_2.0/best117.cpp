//Leetcode Question Spatial Matrix ||
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n)); // Initialize an n x n matrix with zeros
        
        int i = 0;
        int k = 1;
        
        while (k <= n * n) {
            // Left to right
            for (int j = i; j < n - i; ++j) {
                matrix[i][j] = k++;
            }
            
            // Top to bottom
            for (int j = i + 1; j < n - i; ++j) {
                matrix[j][n - i - 1] = k++;
            }
            
            // Right to left
            for (int j = n - i - 2; j >= i; --j) {
                matrix[n - i - 1][j] = k++;
            }
            
            // Bottom to top
            for (int j = n - i - 2; j > i; --j) {
                matrix[j][i] = k++;
            }
            
            ++i;
        }
        
        return matrix;
    }
};
