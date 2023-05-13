//linear search....
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int num;
    cin>>num;
    for(int i=0;i<=n-1;i++){
        if(num==arr[i]){
            cout<<i;
        }
    }
    return 0;
}
//Input: 3 >> 10 20 30
//Output:
//  3
// 10
// 20
// 30
// 20//search the element.
// 1 
//Problem: If the element is present multiple number of time's then it will print the numerous times..