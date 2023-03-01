#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x;
    cin>>y;
    int str;
    str=x;
    x=y;
    y=str;
    cout<<"AFTER SWAP WE GET: "<<endl;
    cout<<"X is "<<x<<endl;
    cout<<"Y is "<<y;
    return 0;
}