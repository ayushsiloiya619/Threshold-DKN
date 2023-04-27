// Numbered triangle fliped
#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){//bade se chota
            cout<<" ";
        }
        //numbers
        for(int k=1;k<=i;k++){//chote se bada
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}
// Sample Input: 4 
// Output: 
/*

   1
  12
 123
1234

*/