#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){   //Here we are doing the condition for a>b ; Firstly it is clear that a is greater for b . Then we are choosing it for the c part.
        if(a>c){//C is greater or not once confirm it will go for the c to be the greatest.
            cout<<a<<" is greatest !"<<endl;
        }
        else{// prits th
            cout<<c<<" is greatest !"<<endl;
        }
    }
    else{//b<a else part of first condition.
        if(b>c){
            cout<<b<<" is greatest !"<<endl;
        }
        else{// final result that it is c only to be greatest.
            cout<<c<<" is greatest !"<<endl;
        }
    }
    return 0;
}
// Sample Input: 23 45 67
// Output 67