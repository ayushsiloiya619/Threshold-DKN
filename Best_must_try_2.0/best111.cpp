//Wave print 1
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no of rows: ";
    cin>>m;
    int n;
    cout<<"Enter the no of cols: ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //wave print
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        else{//i== 1 3 5
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
//Sample Input:
/*
Enter the no of rows: 3
Enter the no of cols: 3
1 2 3
4 5 6
7 8 9
*/
//Output:
/*
1 2 3 
6 5 4 
7 8 9 
*/