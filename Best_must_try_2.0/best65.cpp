//Second max element in the array..
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<=n-1;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int secmax=arr[0];
    for(int i=0;i<=n-1;i++){
        if(secmax<arr[i] && arr[i]!=max){
            secmax=arr[i];
        }
    }
    cout<<"The second largest is: "<<secmax<<endl;
    return 0;
}
//Sample Input: 3 -> 10 20 30
//Output: 20