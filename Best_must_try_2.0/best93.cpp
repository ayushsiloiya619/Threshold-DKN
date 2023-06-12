//2-D array example :1..
#include<iostream>
using namespace std;
int main(){
    // int arr[3][3]={1,2,3,4,5,6,7,8,9};
    // for(int i=0;i<=2;i++){//0 1 2  
    //     cout<<arr[0][i]<<" ";//yeh first row hai... [0,1] [0,2] [0,3]
    // }
    // cout<<endl;
    // for(int i=0;i<=2;i++){//yeh jo array hai woh hai two row ki hai ..[1,0] [1,1] [1,2]
    //     cout<<arr[1][i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<=2;i++){//yeh jo array hai woh hai teesre row ki hai ..[2,0] [2,1] [2,2]
    //     cout<<arr[2][i]<<" ";
    // }
    // cout<<endl;
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//Output:
/*
1 2 3 
4 5 6
7 8 9
*/ 
