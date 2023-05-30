//Rotate the array a by k steps. Where k is non negative number..as well as n is the size of array a.
#include<iostream>
#include<vector>
using namespace std;
void input(vector<int>&v){
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);
  v.push_back(50);
  return;
}
void display(vector<int>&v){
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  return;
}
void reversepart(int i, int j,vector<int>&v){
    while(i<=j){
        int temp;
        temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
}
int main(){
  vector<int> v;
  input(v);
  display(v);
  //built-in function..
  reversepart(1,3,v);
  display(v);//print
  return 0;
}