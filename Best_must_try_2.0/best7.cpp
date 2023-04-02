#include<iostream>
#include<cmath>
using namespace std;
int item=10;
void print(){
    cout<<"Welcome"<<endl;
    cout<<item<<endl;
    cout<<pow(2,4)<<endl;
    return ;
}
int main(){
    int item=20;//local var >> global var.
    float res=item+0.2;
    cout<<res<<endl;
    cout<<sqrt(24)<<endl;
    print();
    return 0;
}