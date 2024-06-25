#include<iostream>
using namespace std;
int main (){
    // Int a , Int b 
    //Dividend = Divisor * Quotient + Remainder
    //Quotient = Dividend / Divisor

    int a =10;
    int b=2;
    int q= a/b;
    int r= a - a/b;
    cout<<r;
    return 0;
}