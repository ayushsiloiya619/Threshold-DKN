#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //for(int i=1;i<=n;i=i+2){
        //cout<<i<<" ";
    //}
    //AP formula an=a+(n-1)d
    // a= first term
    //d=common diff
    //an = nth term
    //n = number of terms
    
    //Method 1 
    //for(int i=1;i<=2*n-1;i=i+2){
     //   cout<<i<<" ";
    //}
    
    int a=1;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a+2;
    }
    return 0;
}
// Sample Input : 10
// Ouput : 1 3 5 7 9 11 13 15 17 19.