#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    int ascii=int(ch);
    if((ascii>=97 && ascii<=122) ||(ascii>=65 && ascii<=90)){
        cout<<"This is an alphabet. "<<endl;
    }
    else if(ascii>=48 && ascii<=57){
        cout<<"Digit "<<endl;
    }
    else{
        cout<<"Special character. "<<endl;
    }
    return 0;
}
// Sampel Input: 0
// Output : Digit
// Sample Input: A
// Output : Alphabet