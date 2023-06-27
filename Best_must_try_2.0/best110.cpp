//2D array multiplication..
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the rows: ";
    cin>>m;
    int n;
    cout<<"Enter the cols: ";
    cin>>n;
    cout<<endl;
    int m1;
    cout<<"Enter the rows: ";
    cin>>m1;
    int n1;
    cout<<"Enter the cols: ";
    cin>>n1;
    if(n==m1){//pehle row mano usko aur phr dusre wali ko col matrix mano..pehle ka col dusre ki row..
      //first matrix..
    int arr[m][n];
    cout<<"Enter elements of firt matrix!";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //second matrix..
    cout<<"Enter the elements of second matrix!";
    int arr1[m1][n1];
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            cin>>arr1[i][j];
        }
    }
    //resultant matrix...main formula 
    int res[m][n1];
    for(int i=0;i<m;i++){
        for(int j=0;j<n1;j++){
            res[i][j]=0;
            //multiply..
            //res[i][j]=arr[i][0]*arr1[0][j]+arr[i][1]*arr1[1][j]+...
            for(int k=0;k<m1;k++){
                res[i][j]+=arr[i][k]*arr1[k][j];
            }
            
        }
    }
    cout<<endl;
    //print
    for(int i=0;i<m;i++){
        for(int j=0;j<n1;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else{
        cout<<"The matrix can't be multiplied!";
    }
}
//Sample Input:
/*
Enter the rows: 2
Enter the cols: 3

Enter the rows: 3
Enter the cols: 4
Enter elements of firt matrix!
1 2 3
4 5 6

Enter the elements of second matrix!
1 2 3 4
5 6 7 8
9 10 11 12
*/
//Output:
/*
38 44 50 56 
83 98 113 128 
*/