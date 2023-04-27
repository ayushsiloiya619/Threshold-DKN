//Print the following pattern.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){//bade se chota
            cout<<" ";
        }
        //stars
        for(int k=1;k<=i;k++){//as it is.
            cout<<char(k+64)<<" ";//triangel ajayega
        }
        cout<<endl;
    }
    return 0;
}
// Sample Input: 5
// Output: 
/*
    A    
   A B   
  A B C  
 A B C D 
A B C D E 

*/