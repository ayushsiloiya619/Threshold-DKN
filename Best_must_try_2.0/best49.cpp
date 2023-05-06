//pascal triangle..
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){//loop...
        int cur=1;
        for(int j=0;j<=i;j++){//looping ho rahi hai...
            cout<<cur<<" ";//value print
            cur=cur*(i-j)/(j+1);//formula secret 
        }
        cout<<endl;
    }
    return 0;
}
// Sample Input: 5
// Output: 
/*

1 
1 1 
1 2 1         
1 3 3 1       
1 4 6 4 1     
1 5 10 10 5 1 

*/