//Leetcode (48) Rotate the image by 90 degree.
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        //transpose
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                //swap the given vector..
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        //reverse the given vector..
        for(int k=0;k<n;k++){
            int i=0;
            int j=n-1;
            while(i<=j){//swapping the k,i and k,j..
                int temp=matrix[k][i];
                matrix[k][i]=matrix[k][j];
                matrix[k][j]=temp;
                i++;
                j--;
            }
        }
        return;
    }
};