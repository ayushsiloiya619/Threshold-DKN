//Sum of all the elements fo the 2D array..
#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};//45
    int sum=0;
    for(int i=0;i<=3-1;i++){//traverse
        for(int j=0;j<=3-1;j++){
            sum=sum+arr[i][j];//condition..
        }
    }
    cout<<sum;
return 0;
}
//Output: 45