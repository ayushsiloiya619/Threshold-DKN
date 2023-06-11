//2-D arrays... Initialization , declaration::
#include<iostream>
using namespace std;
int main(){
  //int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};//specific define kar arhe hai ..
  int arr[3][3]={1,2,3,4,5,6,7,8,9};//order ya serial bna diya...
  cout<<arr[0][1];//print le liya..
  // int arr[][3]={1,2,3,4,5,6,7,8,9};//column dena jaruri hota hai ... row bhale hi left kardo...
  // cout<<arr[0][1];
  // int arr[2][]={1,2,3,4,5,6,7,8,9};//error show karega ....
  // cout<<arr[0][1];
  return 0;
}
//Output: 2
//Note : 2D arrays are arrays of arrays..
