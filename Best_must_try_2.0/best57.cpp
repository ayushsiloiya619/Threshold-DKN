//Pass by reference using alias..
#include<iostream>
using namespace std;
void swap(int &a,int &b){//address pass kare hai saste wale technique..
    int temp=a;
    a=b;
    b=temp;
    return ;
}
int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
//Sample Input: 2 3
//Output: 3 2