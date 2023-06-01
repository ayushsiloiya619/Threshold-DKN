//Test
//Write a function in c++ that takes in an array of numbers and returns the sum of all the even numbers in the array.
#include<iostream>
#include<vector>
using namespace std;
void input(vector<int>&v){
  v.push_back(1);
  v.push_back(2);//2
  v.push_back(3);
  v.push_back(4);//4
  v.push_back(5);
  v.push_back(6);//6
  v.push_back(7);
  v.push_back(8);//8
  v.push_back(9);
  return;
}
void sumeven(vector<int>&v){
  int sum=0;
  for(int i=0;i<v.size();i++){
    if(v[i]%2==0){
      sum=sum+v[i];
    }
  }
  cout<<sum<<endl;
  return;
}
int main(){
  vector<int>v;
  input(v);
  sumeven(v);
  return 0;
}
//Output: 20