//To store the mark of 4 student's parallel with their roll number...
#include<iostream>
using namespace std;
int main(){
    int arr[2][4]={12,13,14,15,90,80,87,99};
   for(int i=0;i<=1;i++){
       for(int j=0;j<=3;j++){
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
   }
    return 0;
}
//Output: 
/*
12 13 14 15 
90 80 87 99 
*/