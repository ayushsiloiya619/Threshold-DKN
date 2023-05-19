//Using the size also ...
#include<iostream>
using namespace std;
//display naam ka function bnaya hua hai...
void display(int a[], int size){//similar way mein yahan bi pass kari array...
    for(int i=0;i<=size-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[], int size){//nayi array pass kari ...
    b[0]=100;
    return;
}
int main(){
    int arr[]={1,2,3,4,5,6};//declare...
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    display(arr,size);//display
    change(arr,size);//change
    display(arr,size);//display
    return 0;
}
//Output: 
// 6
// 1 2 3 4 5 6 
// 100 2 3 4 5 6 