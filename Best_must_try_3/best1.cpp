#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int power=1;
    int ans=0;
    int count=0;
    while(n>0){
        int parity=n%2;
        ans+=parity*power;
        power=power*10;
        if(parity==0){
            count++;
        }
        n=n/2;
    }
    cout<<"The number of zeroes for "<<ans<<" is"<<endl;
    cout<<count<<endl;
    return 0;
}
//Deciaml to binary kabhi bi nikal rahe honge to hum lagate hai concept of parity.