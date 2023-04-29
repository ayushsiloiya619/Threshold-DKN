//Print the following pattern.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //three triangle banane hai magar dhyan se thoda.
    //dhanche ko maintain karlo. simplicity.
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){//bade se chota
            cout<<" ";
        }
        for(int j=1;j<=i;j++){//chote se bada
            cout<<"*";
        }
        for(int j=2;j<=i;j++){//easy to pizzy method. 2 se chala do isko. simple ek kam print hoga.
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
// Sample Input: 4
// Output: 
/*

   *   
  ***  
 ***** 
*******

*/