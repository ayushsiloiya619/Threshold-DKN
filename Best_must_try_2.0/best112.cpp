//Column wise printing in the 2-D array..
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
        for(int j=0;j<n;j++){
            for(int i=0;i<m;i++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
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
1 4 7 
2 5 8 
3 6 9 
*/