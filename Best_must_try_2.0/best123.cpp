//Pascal Traiangle Solving using Smart Method..
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m=5;
    //push_back
    vector< vector<int> >v;
    for(int i=1;i<=m;i++){
        vector<int> a(i);
        v.push_back(a);
    }
    //generate
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i ){// 1 lagane hai..
                v[i][j]=1;
            }
            else{
                v[i][j]=v[i-1][j]+v[i-1][j-1];//baki values..
            }
        }
    }
    //print
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//Output:
/*
1         
1 1       
1 2 1     
1 3 3 1   
1 4 6 4 1 
*/