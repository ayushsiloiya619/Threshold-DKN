//Spiral Matrix Leetcode:(Medium)
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m=matrix.size();
    int n=matrix[0].size();
    int minr=0;
    int minc=0;
    int maxr=m-1;
    int maxc=n-1;
    vector<int>v;

    while(minr<=maxr && minc<=maxc){
        //right ... 
        //Note = Yahn pe humari row constant...
        for(int j=minc;j<=maxc;j++){
           v.push_back(matrix[minr][j]);
        }
        minr++;//row ko aage badhaoge bi ..
        if(minr>maxr || minc>maxc) break;
        //down
        //Note = Yahn pe humari cols constant...
        for(int i=minr;i<=maxr;i++){
            v.push_back(matrix[i][maxc]);
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        //left
        //Note = Yahn pe row constant again..
        for(int j=maxc;j>=minc;j--){
            v.push_back(matrix[maxr][j]);
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        //up
        //Note = Yahn pe cols constant hai..
        for(int i=maxr;i>=minr;i--){
            v.push_back(matrix[i][minc]);
        }
        minc++;
    }
    return v;
    }
};