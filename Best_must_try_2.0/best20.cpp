//Count the digits.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=n;
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    if(a==0) cout<<"The digits are : 1"<<endl;
    else cout<<"the dgits are : "<<count<<endl; 
    return 0;
}
// Sample Input : 123
// Ouput : 3

// Sample Input : 0
// Output : 1