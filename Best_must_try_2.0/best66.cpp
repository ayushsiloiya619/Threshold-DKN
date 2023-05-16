//Total number of elements greater than x are .. ?
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int count=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<"The total number of elements greater than "<<x<<" are: "<<count<<endl;
    return 0;
}
//Sample Input: 
// 3
// 10 20 30
// 12
//Output: The total number of elements greater than 12 are: 2