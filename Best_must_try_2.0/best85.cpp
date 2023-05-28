//Write a prgm to reverse an array without using any extra array..
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
  int i=0;//intialize
  int j=v.size()-1;//reverse ulat chalayenge..
  while(i<=j){//i<=j
    int temp;//swap two numbers condition...
    temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;//age badhate jao..
    j--;//kam karte jao..
  }
  display(v);//print
  return 0;
}
//Output: 
/*
10 20 30 40 50
50 40 30 20 10
*/