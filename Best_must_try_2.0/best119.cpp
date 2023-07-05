//2D Vector manipulation..
#include<iostream>
using namespace std;
void change(int a[]){
    a[0]=100;
}
void change2D(int arr1[3][3]){//we need to give the array size in 2D Array.
    arr1[0][0]=100;
}
int main(){
    int a[3]={1,2,3};
    int arr1[3][3]={{1,2,3},{4,5,6},{8,9,10}};
    // cout<<a[0]<<endl;
    // change(a);
    // cout<<a[0]<<endl;
 
    cout<<arr1[0][0]<<endl;
    change2D(arr1);
    cout<<arr1[0][0]<<endl;
}
//Output: 
/*
1
100
*/