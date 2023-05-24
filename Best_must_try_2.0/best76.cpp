//Using the sort and at operations in the vector..
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    for(int i=0;i<3;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    //output
    for(int i=0;i<3;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //update
    v.at(0)=23;
    v.at(1)=13;
    //output
    //sort
    sort(v.begin(),v.end());
    for(int i=0;i<3;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
//Output:
/*
10 20 30
10 20 30
13 23 30
*/
//Note (at) operation is used for the update and changing the values in a vector...
//Note the c++ 17 version doesn't support the sort operation...in GDB