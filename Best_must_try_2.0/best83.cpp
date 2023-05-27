//Reverse the array and store it into another array..
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ind;
        cin>>ind;
        v.push_back(ind);
    }
    //copy another array in reverse order...
    vector<int>v2(v.size());
    v2[0]=v[6];
    v2[1]=v[5];
    v2[2]=v[4];
    v2[3]=v[3];
    v2[4]=v[2];
    v2[5]=v[1];
    v2[6]=v[0];
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    return 0;
}
//Sample Input: 7->  10 20 30 40 50 60 70
//Output: 70 60 50 40 30 20 10