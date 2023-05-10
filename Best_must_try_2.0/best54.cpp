//swap without using extra var...
#include<iostream>
using namespace std;
int main(){
    int temp;
    int a,b;
    cin>>a>>b;
    //a=2 & b=3
    a=a+b;// 2+3=5
    b=a-b;//5-3=2
    a=a-b;//5-2=3
    cout<<a<<" "<<b<<endl;
    return 0;
}
//Sample Input: 2 3 
//Output: 3 2