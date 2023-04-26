//bacho kya seekh milti hai ki isko slice krdo two prt mein star alag aur space alag.
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
    for(int k=1;k<=n+1-i;k++){//bade se chota
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
  ***
   **
    *
 
*/