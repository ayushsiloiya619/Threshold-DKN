#include<iostream>
using namespace std;
void fact(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    cout<<fact<<endl;
    return ;
}
int main(){
    fact(4);
}