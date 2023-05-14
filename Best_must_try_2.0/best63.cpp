//Linear Search better result..
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
    int flag=false;//initialize the flag...
    for(int i=0;i<=n-1;i++){
        if(arr[i]==num){
            flag=true;
        }
    }
    if(flag==true){
        cout<<"Element is found!";
    }
    else{
        cout<<"Not present!";
    }
    return 0;
}
//Sample Input: 
// 3
// 10
// 20  
// 30
// 20
// Element is found!