//Spiral Matrix..
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
    //Sprial..
    int minr=0;
    int minc=0;
    int maxr=m-1;
    int maxc=n-1;
    while(minr<=maxr && minc<=maxc){
        //right ... 
        //Note = Yahn pe humari row constant...
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;//row ko aage badhaoge bi ..
        if(minr>maxr || minc>maxc) break;//yeh jaruri hai har jagah check karna..
        //down
        //Note = Yahn pe humari cols constant...
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        //left
        //Note = Yahn pe row constant again..
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        //up
        //Note = Yahn pe cols constant hai..
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }
    return 0;
}
//Sample Input:
/*
Enter the no of rows: 3
Enter the no of cols: 4
1 2 3 4
5 6 7 8
9 10 11 12
*/
//Output:
/*
1 2 3 4 8 12 11 10 9 5 6 7 
*/