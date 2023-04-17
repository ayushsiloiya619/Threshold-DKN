//Composite or Not ?
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            cout<<"It's composite. "<<endl;
            break;
        }
        else{
            cout<<"No composite. "<<endl;
            break;
        }
    }
    return 0;
}
// Sample Input : 12
// It's composite.