//The array revision with pointers..(Home Assesment)
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int* ptr=arr;
    cout<<"The original array is: ";
    for(int i=0;i<=5;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    cout<<"The changed array is: ";
    ptr[0]=100;
    ptr[1]=200;
    ptr[2]=300;
    ptr[3]=400;
    ptr[4]=500;
    ptr[5]=600;
    for(int i=0;i<=5;i++){
        cout<<ptr[i]<<" ";
    }
    return 0;
}
//Output: 
/*
The original array is: 1 2 3 4 5 6 
The changed array is: 100 200 300 400 500 600 
*/
//Note : The pointer has aukad >> array...