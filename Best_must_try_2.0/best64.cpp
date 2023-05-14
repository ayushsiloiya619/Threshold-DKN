//Finding the max element in  the array.
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
    cout<<"The max element in the array is: "<<max<<endl;
    return 0;
}
//Sample Input: 3 10 20 30
//Output: The max element in the array is: 30 
//Note: INT_MIN & INT_MAX can be used also...using #include<climits>..