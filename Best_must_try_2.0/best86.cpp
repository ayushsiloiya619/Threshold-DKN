//Write a prgm to reverse an array without using any extra array in for loop..
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v){
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  return;
}
int main(){
  vector<int> v;
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);
  v.push_back(50);
  display(v);
  int i=0;//intialize//pointer 1
  int j=v.size()-1;//reverse ulat chalayenge..  ///pointer 2
  for(int i=0,j=v.size()-1;i<=j;i++,j--){
    int temp=v[i];
    v[i]=v[j];
    v[j]=v[i];
  }
  //built-in function..
  // reverse(v.begin(),v.end());
  display(v);//print
  return 0;
}
//Output: 
/*
10 20 30 40 50
50 40 30 20 10
*/