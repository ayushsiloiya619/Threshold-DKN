//Linear Search..
#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int ans=-1;
    int num;
    cin>>num;
    for(int i=0;i<5;i++){
        if(array[i]==num){
            ans=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}
//Sample Input: 5
// Output: 4