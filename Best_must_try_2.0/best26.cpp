//floyd traingle.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<k<<" ";//extra variable 
            k++;//increment the value
        }
        cout<<endl;
    }
    return 0;
}
//Sample Input: 4
//Output:  
/*
1        
2 3      
4 5 6    
7 8 9 10 
*/