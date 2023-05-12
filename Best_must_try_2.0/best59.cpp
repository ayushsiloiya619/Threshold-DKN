//array's explanation for memory allocation..
#include<iostream>
using namespace std;
int main(){
    int arr[4];
    cout<<&arr<<endl;
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    return 0;
}
//Output: 
/*
0x61ff00
0x61ff00
0x61ff00
0x61ff04
*/
//Note : Here we have proved that the address of array will the be the address of index of element 1.
