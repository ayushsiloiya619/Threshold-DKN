//Reverse the array and store it into another array.. Optimised Solution
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v1){
  for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
  }
  cout<<endl;
  return;
}
int main(){
  vector<int>v1;
  v1.push_back(10);//push in elements in the vector..
  v1.push_back(20);
  v1.push_back(30);
  v1.push_back(40);
  v1.push_back(50);
  display(v1);//print 
  vector<int>v2(v1.size());
  for(int i=0;i<v2.size();i++){
    //i+j=size-1;
    int j=v1.size()-1-i;
    v2[i]=v1[j];//also v2[i]=v1[v1.size()-1-i]
  }
  display(v2);
  return 0;
}