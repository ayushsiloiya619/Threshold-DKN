//Print the following.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //three loops ayenge.
    //ek space ke liye
    //ek number ke liye.
    //ek reverse number ke liye.
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){//bade se chota
            cout<<" ";
        }
        for(int j=1;j<=i;j++){//chote se bada
            cout<<j;
        }
        for(int j=i-1;j>=1;j--) {//reverse count.
            cout <<j;
        }
        cout<<endl;
    }
    return 0;
}
//Sample Input: 4
// Output:
/*

   1
  121
 12321
1234321

*/