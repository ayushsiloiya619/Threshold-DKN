//hcf of two suing optimised code..
#include<iostream>
using namespace std;
int hcf(int a,int b){
  int hcf=1;
  for(int i=min(a,b);i>=1;i--){//yahan loop ulat chala lo kyuki highest common factor humesha last mein hi toh milega na bhai....
    if(a%i==0 && b%i==0){
      hcf=i;
      break;//faltu ka bar bar cahalao mat....
    }
  }
  return hcf;
}
int main(){
  int a,b;
  cin>>a>>b;
  cout<<hcf(a,b);
  return 0;
}
//Sample Input: 24 60
// Output: 12
//Better optimised than previous code: 100%