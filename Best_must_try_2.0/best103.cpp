//best space efficient approach for two matrix addition..
#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int arr1[3][3]={10,11,12,13,14,15,16,17,18};
    for(int i=0;i<=3-1;i++){//iterate..
        for(int j=0;j<=3-1;j++){//iterate..
            arr1[i][j]=arr1[i][j]+arr[i][j];//second array mein pehli wali ko add kardiya..
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//Output:
/*
11 13 15 
17 19 21 
23 25 27 
*/