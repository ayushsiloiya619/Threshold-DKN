//Target Value search by efficient algorithm:Leetcode 240
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int i = 0;
        int j = cols - 1; //last element access karna tha.
        while (i <= rows - 1 && j >= 0) { //condition for rows kam na hojaye aur cols bi.
            if (matrix[i][j] == target) return true;
            else if (matrix[i][j] > target) j--; //bada hai toh left jao .. yani cols--
            else i++; //chota hai toh...go down yani rows jada hongi--.
        }
        return false;
    }
};