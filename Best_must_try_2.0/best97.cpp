//Find the largest in 2-D arrays..
#include<iostream>
#include<climits>
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
    int max=INT_MIN;
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            if(max<arr[i][j]) max=arr[i][j];
        }
    }
    cout<<max;
    return 0;
}
//Sample Input:
/*
Enter the no. of rows 3
Enter the no. of cols 3
1 2 3
4 5 6
7 8 9
*/
//Output:
/*
9
*/