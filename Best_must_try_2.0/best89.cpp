//Rotate the array by k steps and k must be pos number and also k is size of array...
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
void reversepart(int i,int j,vector<int>&v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    display(v);
    int k=2;
    int n=v.size();
    if(k>n) k=k%n;
    reversepart(0,n-k-1,v);//0 ------ n-k-1==5-2-1== (2) 0 1 2 3 4
    reversepart(n-k,n-1,v);//5-2== (3) 0 1 2 3  .... 5-1== (4) 0 1 2 3 4
    reversepart(0,n-1,v);//0 se lekar n-1 tak yani 4
    display(v);
    return 0;
}
//Output:
/*
1 3 4 5 6 
5 6 1 3 4 
*/