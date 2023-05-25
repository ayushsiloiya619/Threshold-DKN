//Fully functional vector example..
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    return;
}
void change(vector<int>&v){
    v.at(0)=5;
    v.at(1)=10;
    v.at(2)=20;
    v.at(3)=30;
    return;
}

int main(){
    vector<int>v;
    display(v);
    change(v);
    cout<<endl;
    display(v);
    return 0;
}
//Output: 
/*
10 20 30 40
5 10 20 30
*/