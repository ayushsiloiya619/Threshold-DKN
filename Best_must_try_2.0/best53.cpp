//fact of n numbers with fine optimised...
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
        cout<<fact<<endl;
    }
    return 0;
}
//Sample Input: 10
//Output: 
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