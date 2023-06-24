//Transpose continue... Into new array...
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
    // cout<<endl;
    // //printing the transpose of a matrix..
    // for(int j=0;j<=n-1;j++){//yqhan pe humne row ko column aur column ko row bna diya ha...
    //     for(int i=0;i<=m-1;i++){
    //         cout<<arr1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<endl;
    //result..
    int t[n][m];
    for(int i=0;i<=n-1;i++){//visit..
        for(int j=0;j<=m-1;j++){//visit..
            t[n][m]=arr1[j][i];//dono ulat honge...
            cout<<t[n][m]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//Output:
/*
1 4 
2 5 
3 6 
*/