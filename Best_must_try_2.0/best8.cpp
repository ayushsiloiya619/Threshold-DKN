#include<iostream>
using namespace std;
void changeval(int &z,int &q){
    z=100;
    q=99;
}
int main(){
    int a=5;
    int b=10;
    changeval(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
//passbyreference.