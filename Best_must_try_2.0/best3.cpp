#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int power=1;
    int ans=0;
    while(num>0){
        int parity_dig=num%2;//concept of parity form .
        ans=ans+(parity_dig*power);
        power=power*10;
        num/=2;//num is divided by 2 because the parity is set for the % 2.
    }
    cout<<ans;
    return 0;
}