//combination find:
#include<iostream>
using namespace std;
int main(){
    int n,r;
    cin>>n>>r;
    //combination question =>>ncr= n! / r! * (n-r)!
    int fact=1;
    for(int i=2;i<=n;i++){
        fact=fact*i;
    }
    // r fact ..
    int rfact=1;
    for(int i=2;i<=r;i++){
        rfact=rfact*i;
    }
    //n-r fact
    int nrfact=1;
    for(int i=2;i<=n-r;i++){
        nrfact=nrfact*i;
    }
    cout<<fact/(rfact*nrfact)<<endl;
    //permutation ..
    //formula == n!/(n-r)!
    cout<<fact/nrfact<<endl;
    return 0;
}
//Sample Inpit: 5 2
// Output: 10
//Output: 20