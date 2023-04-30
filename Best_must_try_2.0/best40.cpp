#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //bada chota hat jata hai ismein.
    //simple if else condition using nsp and nst.
    int nsp=n-1;// no of spaces.
    int nst=1;// no of stars.
    for(int i=1;i<=2*n-1;i++){
        //spaces
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        if(i<=n-1) nsp--;//i=4 fail .. then ++ starts.
        else nsp++;
        //stars
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        if(i<=n-1) nst=nst+2;
        else nst=nst-2;//i=4 fails....then --2 starts.
        cout<<endl;
    }
    return 0;
}
//Sample Input: 4
// Output:
/*

   *   
  ***  
 ***** 
*******
 ***** 
  *** 
   *  

*/