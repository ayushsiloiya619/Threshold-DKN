//double pointer...
#include<iostream>
using namespace std;
int main(){
    int x;
    int* ptr=&x;
    cout<<"This is the address of x: "<<ptr<<endl;
    int** p=&ptr;
    cout<<"This is the address of pointer itself "<<p<<endl;
    int*** pt=&p;
    cout<<"This is the address of address p: "<<pt<<endl;
    return 0;
}
//Output: 
/*
This is the address of x: 0x61ff08
This is the address of pointer itself 0x61ff04
This is the address of address p: 0x61ff00   
*/