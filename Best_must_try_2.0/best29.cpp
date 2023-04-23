// Pattern for zero
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;//random use hai iska yahan bas.
    for(int i=1;i<=n;i++){
        if(i%2!=0) a=1;
        else a=0;
        for(int j=1;j<=i;j++){
            cout<<a;
            //flip karna padega.
            if(a==1) a=0;
            else a=1;
        }
        cout<<endl;
    }
    return 0;
}
// Sample Input: 5
/*
1    
01   
101  
0101 
10101
*/