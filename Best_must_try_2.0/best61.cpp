//sum of array elements..
#include<iostream>
using namespace std;
int main(){
    int ar[5]={1,2,3,4,5};
    int sum=0;
    for(int i=0;i<=4;i++){//0 1 2 3 4
        sum=sum+ar[i];
    }
    cout<<sum<<endl;
    return 0;
}
//Output: 15