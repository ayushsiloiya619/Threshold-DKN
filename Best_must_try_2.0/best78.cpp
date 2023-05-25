//Now using ampersand in vector....
#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>& v){
    v[0]=100;
    v[1]=200;
    v[2]=300;
    return;
}
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
//vector are passed by reference through & sign....
//No changes are occured...
//Output: 
/*
10 20 30 40    
100 200 300 40 
*/