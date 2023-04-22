// starcross
#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    for(int i=1;i<=size;i++){
        for(int j=1;j<=size;j++){
            if(i+j==size+1 || i==j) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//Sample Output: 5
/*

*   *
 * * 
  *  
 * * 
*   *

*/