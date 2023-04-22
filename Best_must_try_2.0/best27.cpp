//Pattern for zero.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0) a=1;
        else a=0;//random declare.
        for(int j=1;j<=n;j++){
            cout<<a;
        }
        cout<<endl;
    }
    return 0;
}
// Sample Input: 5
/*
11111
00000
11111
00000
11111
*/