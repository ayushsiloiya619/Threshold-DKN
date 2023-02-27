#include<iostream>
using namespace std;
int main(){
    int x,y,m;
    cin>>x;
    cin>>y;
    int sum=0;
    cout<<"Enter the number for divisble by : ";
    cin>>m;
    for(int i=x;i<=y;i++){
        if(i%m==0){
            sum=sum+i;
        }
    }
    cout<<"The sum is : "<<sum;
    return 0;
}