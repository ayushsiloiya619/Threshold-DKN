// A number is prime or composite. 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag=true;//pehle se manke chal rahe hai ki it's true.
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }
    if(n==1) cout<<"Neither prime nor composite. "<<endl;
    else if(flag==true) cout<<n<<" is a prime. "<<endl;
    else cout<<n<<" is a composite. "<<endl;
    return 0;
}
// Sample  Input : 11
// Output : is a prime.