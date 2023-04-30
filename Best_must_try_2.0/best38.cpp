//Print the following pattern.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //dhancha bi maintain hogya sath sath.
    // two var declare karne honge bas . 
    //observation strategy..
    //no. of spaces hogya and no of stars hogya.
    int nsp=n-1;
    int nst=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        nsp--;//ek kam karte jayenge.
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        nst=nst+2;//+2 badhate jayenge.
        cout<<endl;
    }
    return 0;
}
// Sample Input: 4
// Output: 
/*

   *
  ***
 *****
*******

*/