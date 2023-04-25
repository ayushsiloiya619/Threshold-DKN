//Binary triangle second method.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;//no extra var to declare
    for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           if((i+j)%2==0) cout<<1; // (i+j)%2==0 && (i+j)%2!=0
           else cout<<0;
       }
       cout<<endl;
    }
    //sum even hai toh yani ya toh dono even honge ya odd honge.islye (i+j)%2=0
    return 0;
}
// Sample Input: 5
// Output: 
/*
1  
01 
101
0101 
10101
*/