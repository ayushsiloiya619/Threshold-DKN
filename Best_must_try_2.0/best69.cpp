//Some important points of array using pointers...
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int* ptr=arr;//pointer
    cout<<arr<<endl;///valid
    cout<<&arr[0]<<endl;//valid
    cout<<ptr<<endl;//valid
    ptr[0]=12;//chamging the pointer[0] means changing the first element of array..
    cout<<ptr[0]<<endl;
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";//ptr has capability to print the whole array...
    }
    return 0;
}
//Output: 
// 0x61fef4
// 0x61fef4
// 0x61fef4
// 12
// 12 2 3 4 5 