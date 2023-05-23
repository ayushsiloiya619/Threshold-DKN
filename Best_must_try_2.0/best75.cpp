//vector mein input lena nd print karana...
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
//Output: 
/*
10 20 30 40 50 
10 20 30 40 50 
*/
//Note : Hence the vector is a dynamic array...
