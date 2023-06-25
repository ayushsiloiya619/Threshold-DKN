//Swapping with transpose in the same matrix..
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of rows/cols of a sqaure matrix: ";
    cin>>m;
    int arr[m][m];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //print
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //swap
    for(int i=0;i<=m-1;i++){
        for(int j=i+1;j<=m-1;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    //print
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//Sample Input: 
/*
Enter the number of rows/cols of a sqaure matrix: 3
1 2 3
4 5 6
7 8 9 
*/
//Output:
/*
1 2 3 
4 5 6 
7 8 9 
      
1 4 7 
2 5 8 
3 6 9 
*/