//swap using fuction and pointers..
#include<iostream>
using namespace std;
void swap(int *x,int *y){//pointer pass kare hai reference ke liye..
    int temp=*x;//smanan of x
    *x=*y;//swap
    *y=temp;//saman of temp...
    return ;
}
int main(){
    int a,b;//input le liye.
    cin>>a>>b;
    swap(&a,&b);//address pass kare hai..
    cout<<a<<" "<<b<<endl;
    return 0;
}
//Sample Input: 5 2
//Output: 2 5