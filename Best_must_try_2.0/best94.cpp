//Taking the input and printing the output:
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no. of rows ";
    cin>>m;
    int n;
    cout<<"Enter the no. of cols ";
    cin>>n;
    int arr[m][n];//matrix for m*n ke liye.....
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    //print
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//Sample input: 
/*
3
3
1 2 3 4 5 6 7 8 9
*/
//Output:
/*
1 2 3
4 5 6
7 8 9
*/