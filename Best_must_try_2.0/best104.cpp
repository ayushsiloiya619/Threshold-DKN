//Transpose of a matrix...
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the size: ";
    cin>>m;
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int arr1[m][n];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<endl;
    //printing the transpose of a matrix..
    for(int j=0;j<=n-1;j++){//yqhan pe humne row ko column aur olumn ko row bna diya ha...
        for(int i=0;i<=m-1;i++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//Sample Input: 
/*
Enter the size: 3
Enter the size: 3
1 2 3
4 5 6
7 8 9
*/
//Output: 
/*
1 4 7 
2 5 8 
3 6 9 
*/