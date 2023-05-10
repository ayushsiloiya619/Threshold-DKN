//Pointer's basics..
#include<iostream>
using namespace std;
int main(){
    //int x;//memory allocate
    //int* p=&x;//address allocate-indicate to...
    //cout<<&x<<endl;//same add
    //cout<<p<<endl;//same add
    //int y=90;//daba bano y naam ka ..usmein 90 store karo and uska kuch address hga.
    //int* temp=&y;//temp ka daba bnao usmein address rakho y ka aur uska khud ka bi address hga..
    //y=100;//update the value fo y.
    //cout<<*temp;//print the temp value.
    int x,y;
    int *p1=&x;
    int *p2=&y;
    cin>>*p1;//input
    cin>>*p2;//input
    cout<<*p1+*p2<<endl;//sum
    cout<<x+y;//also they are getting the sum.
    //pointer ke respect mein bi x ka input le sakte hai.
    return 0;
}