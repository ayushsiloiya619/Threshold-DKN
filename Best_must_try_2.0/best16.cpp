#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;//for printing the GP series.
    int a=2;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a*3;
    }
    return 0;
}
//Sample Input : 10
//Ouput: 2 6 18 54 162 486 1458 4374 13122 39366 