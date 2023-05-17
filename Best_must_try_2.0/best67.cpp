//declare , change the array using functions..
#include<iostream>
using namespace std;
void display(int a[]){//similar way mein yahan bi pass kari array...
    for(int i=0;i<=5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[]){//nayi array pass kari ...
    b[0]=100;
    return;
}
int main(){
    int arr[]={1,2,3,4,5,6};//declare...
    display(arr);//display
    change(arr);//change
    display(arr);//display
    return 0;
}
//Output: 
// 1 2 3 4 5 6 
// 100 2 3 4 5 6 
//Note: cout<<arr ; cout<<&arr ; cout<<&arr[0] ->  in sbka address jo hota tha woh same tha...