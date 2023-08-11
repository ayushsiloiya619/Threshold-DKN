//Getting with the string!
#include<iostream>
using namespace std;
int main(){
    //strings are the character arrays..
    char str[5]={'a','b','c','d','e'};
    // char str[6]={'a','b','\0','c','d','e'};
    // for(int i=0;i<5;i++){
    //     cout<<str[i]<<" ";
    // }
    // cout<<str<<endl;
    //\0--->This is known as null charcter. This value is assign when teh array is empty for being completed.
    char str1[10]={'a','b','c','d'};
    cout<<str1<<endl;
    // char str1[]="ayush\0siloiya";
    // cout<<str1<<endl;
    return 0;
}
//Output: abcd