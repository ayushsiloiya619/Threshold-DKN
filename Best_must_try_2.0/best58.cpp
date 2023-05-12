//find the last and first digit of a number using pointers and function..
#include<iostream>
using namespace std;
void find(int n , int* ptr1 , int* ptr2){
    *ptr2=n%10;//print the last digit..
    while(n>9){
        n=n/10;//first dig..
    }
    *ptr1=n;//update the val of ptr1...that is for first.
    return;
}
int main(){
    int n;
    cin>>n;
    int first,last;//dabe bann gaye honge..
    int* ptr1=&first;//address specify kardiya...
    int* ptr2=&last;//same as above...
    find(n,ptr1,ptr2);//value pass kardi...
    cout<<first<<" "<<last<<endl;
    return 0;
}
//Sample Input: 123
//Output: 1 3