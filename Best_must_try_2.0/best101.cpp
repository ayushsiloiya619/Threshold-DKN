//Add two matrices lazy method...
#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int arr1[3][3]={10,11,12,13,14,15,16,17,18};
    for(int i=0;i<=3-1;i++){//first matrix...
        for(int j=0;j<=3-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int p=0;p<=3-1;p++){//second matrix...
        for(int q=0;q<=3-1;q++){
            cout<<arr1[p][q]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int k=0;k<=3-1;k++){//resultant matrix...
        for(int t=0;t<=3-1;t++){
            cout<<arr[k][t]+arr1[k][t]<<" ";
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

10 11 12 
13 14 15 
16 17 18 

11 13 15 
17 19 21 
23 25 27 
*/