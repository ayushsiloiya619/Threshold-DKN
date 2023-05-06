//Combo and permu function...
#include<iostream>
using namespace std;
int fact(int x){
   int f=1;
   for(int i=2;i<=x;i++){
       f*=i;
   }
   return f;
}
int combo(int n, int r){
    int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int permu(int n,int r){
    int npr=fact(n)/fact(n-r);
    return npr;
}
int main(){
    int n;
    int r;
    cin>>n>>r;
    int nfact=fact(n);
    int rfact=fact(r);
    int nrfact=fact(n-r);
    cout<<combo(n,r)<<endl;
    cout<<permu(n,r)<<endl;
    return 0;
}
//Sample Input: 5 2
// Output: 
//10 
//20