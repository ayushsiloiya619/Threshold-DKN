//Combo using different technique..
#include<iostream>
using namespace std;
int fact(int x){
  int fact=1;
  for(int i=2;i<=x;i++){
    fact*=i;
  }
  return fact;
}
int combo(int n, int r){
  int ncr = fact(n)/(fact(r)*fact(n-r));
  return ncr;
}
int main(){
  int n,r;
  cin>>n>>r;
  int ncr=combo(n,r);
  cout<<ncr<<endl;
  return 0;
}
//Sample Input : 5 2 
//Output: 10