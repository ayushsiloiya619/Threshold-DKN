//bacho kya seekh milti hai ki isko slice krdo two prt mein star alag aur space alag.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){// bade se chota
            cout<<" ";
        }
        //stars
        for(int k=1;k<=i;k++){//chote se bada
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
// Sample Input:5
// Output: 
/*

   *
  **
 ***
****

*/