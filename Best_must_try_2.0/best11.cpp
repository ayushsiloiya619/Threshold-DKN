#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    int ascii=int(ch);
    if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            cout<<"Vowels"<<endl;
        }
        else{
            cout<<"Cons"<<endl;
        }
    }
    else{
        cout<<"Not applicable";
    }
    return 0;
}
// Sample Input: %
// Ouput : Not applicable
// Sample Input: e
// Output : Vowels