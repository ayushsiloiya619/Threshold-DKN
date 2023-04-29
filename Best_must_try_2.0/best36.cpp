// print the following pattern.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
      //spaces
        for(int j=1;j<=i;j++){//chote se bada
            cout<<" ";
        }
      //stars
        for(int j=1;j<=n;j++){//as it is.
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
// Sample Input: 4
// Output: 
/*

 ****   
  ****  
   **** 
    ****
    
*/