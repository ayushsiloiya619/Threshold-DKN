#include<iostream>
using namespace std;
int main(){
  int a=14;//Divdend
  int b=3;//Divisor
  int q=a/b;//Quotient
  //Formula [Dividend =Divisor * Quotient + Remainder]
  //a=b*q+r
  //r=a-b*q
  int r;
  r=a-(b*q);
  cout<<r<<endl;
  return 0;
}
