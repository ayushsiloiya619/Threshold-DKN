//Leetcode Question.. Transpose (867)
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();//yeh aise declare karte hai vector mein..
        vector<vector<int>> t(n,vector<int>(m));//yahan pe dhyan dena thoda
        for(int i=0;i<=n-1;i++){//initialize..
            for(int j=0;j<=m-1;j++){
                t[i][j]=matrix[j][i];//store kara hai..
            }
        }
        return t;
    }
};