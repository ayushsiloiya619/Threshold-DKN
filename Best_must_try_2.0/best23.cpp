//Power in negative terms.(a^b)
#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cin>>a>>b;
    float power=1;
    bool flag=true;//power humari positive hai
    if(b<0){
        flag=false;
        b=-b;
    }
    for(int i=1;i<=b;i++){
        power=power*a;
    }
    if(flag==false){
        power=1/power;
        b=-b;
    }
    cout<<"The power of "<<a<<" is to "<<b<<" is "<<power<<endl;
    return 0;
}
// Sample input : 2 -3
// Output : 0.125 