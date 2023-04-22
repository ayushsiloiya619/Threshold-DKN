//Starplus
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mid=n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==mid||j==mid) cout<<"*";//col & rows
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// Sample Input : 5 (Always take odd number...)
// Output: 
/*
  *  
  *  
*****
  *  
  * 
*/