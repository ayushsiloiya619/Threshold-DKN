//n'th fibonacci number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1;
    int b=1;
    int sum=0;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    cout<<b<<endl;
    return 0;
}
// Sample Input :10
// Output: 55