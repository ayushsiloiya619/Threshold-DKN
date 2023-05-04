//Pascal Triangel ...
#include<iostream>
using namespace std;
//fact function.....
int fact(int x){
  int fact=1;
  for(int i=2;i<=x;i++){
    fact=fact*i;
  }
  return fact;
}
//cmbination function...
int combo(int n,int r){
  int ncr=fact(n)/(fact(r)*fact(n-r));
  return ncr;
}
//main function
int main(){
  int n;
  cin>>n;
  for(int i=0;i<=n;i++){
    for(int j=0;j<=i;j++){
      cout<<combo(i,j)<<" ";
    }
    cout<<endl;
  }
  return 0;
}
//Sample Input: 5 2
// Output: 
/*
1 
1 1 
1 2 1         
1 3 3 1       
1 4 6 4 1     
1 5 10 10 5 1 
*/
//Key points are : nc0=1; nc1=n ; 0!=1