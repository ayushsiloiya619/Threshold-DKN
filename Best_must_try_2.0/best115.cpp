//Print the diagnols elemet of the 2D matrix..
#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int arr[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
           if(arr[i][j]%2!=0){
               cout<<arr[i][j];
           }
           else{
               cout<<" ";
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