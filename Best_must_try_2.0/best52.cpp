//print fact of n numbers with function...
#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<fact(i)<<endl;//initialize kardi hai loop ko till i..
    }
    return 0;
}
//Sample Input: 10
// Output: 
/*

1
2
6
24
120
720
5040
40320
362880
3628800

*/