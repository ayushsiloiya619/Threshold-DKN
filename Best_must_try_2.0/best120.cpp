//Vector passing in function without defining the size.
#include<iostream>
#include<vector>
using namespace std;
void change2Dvector(vector<vector<int>>&v){//without defining the size..reference ka dhyan dena abs..
    v[0][1]=100;
}
void length(vector<vector<int>>&v){
  cout<<v.size()<<endl;
}
int main(){
     vector<int>v1;//defining the vector 1
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    vector<int>v2;//defining the vector 2
    v2.push_back(4);
    v2.push_back(5);
    vector<int>v3;// defining the vector 3
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);
    vector< vector<int> > v;//2D vector
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    // cout<<v[0][1]<<endl;//print
    // change2Dvector(v);
    // cout<<v[0][1]<<endl;//print
    length(v);//three vector merge hue hai na..
    return 0;
}
//Output:
/*
2
100
*/