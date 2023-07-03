//Print the diagonals of a 2D matrix..In real form..
#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int arr[m][m];
    //declare
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    //print
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i+j==m-1 || i==j){// (i==j)Primary diagonal.. and (i+j==m-1) secomdary diagonal..
                cout<<arr[i][j];//print..
            }
            else{
                cout<<" ";//spaces
            }
        }
        cout<<endl;
    }
    return 0;   
}
//Sample Input:
/*
3
1 2 3
4 5 6
7 8 9
*/
//Output:
/*
1 3
 5 
7 9
*/