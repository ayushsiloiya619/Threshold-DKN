//hcf of two num using simple tech1.....
#include<iostream>
using namespace std;
int hcf(int a,int b){
    int hcf=1;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            hcf=i;
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