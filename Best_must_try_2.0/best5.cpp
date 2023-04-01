#include<iostream>
using namespace std;
float add(float x, float y){
    float res=x+y;
    return res;
}
int add1(int x,int y){
    int sum=x+y;
    return sum;
}
void cube(int t){
    int c=t*t*t;
    cout<<c<<endl;
    return ;
}
void mul(int p,int q){
    int r=p*q;
    cout<<r<<endl;
    return ;
}
void fact(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    cout<<"The fact of "<<x<<" is "<<fact<<endl;
    return ;
}
int main(){
    fact(4);
    mul(3,4);
    cube(2);
    int a=10;//declare the var.
    int b=4;//declare the var.
    cout<<add1(4,5)<<endl;//passing the para.
    cout<<add1(a,b)<<endl;//using the defined para.
    cout<<add(2.4,5.7)<<endl;//float pass.
}