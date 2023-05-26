//Fully functional vector example 2..
#include<iostream>
#include<vector>
using namespace std;
void input(vector<int>&v){
    int x;
    cin>>x;
    for(int i=0;i<5;i++){
        v.push_back(x);
    }
    cout<<endl;
    return;
}
void change(vector<int>&v){
    v.at(0)=5;
    v.at(1)=10;
    v.at(2)=20;
    v.at(3)=30;
    v.at(4)=40;
    return;
}
void display(vector<int>&v){
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    vector<int>v;
    input(v);
    change(v);
    display(v);
    return 0;
}
//Output: 5 10 20 30 40