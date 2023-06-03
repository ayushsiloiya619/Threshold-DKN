//Sort 0 and 1 in an array..
#include<iostream>
using namespace std;
void sort(int arr[],int n){//main concept..
    int zerocount=0;
    int onecount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) zerocount++;
        else onecount++;
    }
    for(int i=0;i<n;i++){//ideation..
        if(i<zerocount) arr[i]=0;//0 
        else arr[i]=1;//1 1 1
    }
    return;
}
void display(int arr[],int n){//display..
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,n);
    display(arr,n);
    return 0;
}
//Sample Input: 4
//1 0 1 1
//Output: 0 1 1 1