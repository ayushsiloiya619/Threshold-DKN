// Function combination and permutation...
#include<iostream>
using namespace std;
//making function for the factorial..
// make int f as a variable for the rest of the part..
int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f;
}
int main(){
    int n,r;
    cin>>n>>r;
    int nfact=fact(n);//
    int rfact=fact(r);//
    int nrfact=fact(n-r);//
    int ncr=nfact/(rfact*nrfact);//
    int npr=nfact/(nrfact);
    //combination
    cout<<ncr<<endl;
    //permutation
    cout<<npr<<endl;
    return 0;
}
// Sample Input: 5 2
/// Output: 10