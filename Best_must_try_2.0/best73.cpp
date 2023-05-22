//Vector ke sath khel..
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;//syntax for vector --> (vector<data_type> specify a name) 
    cout<<"The capacity range is: ";
    v.push_back(1);
    cout<<v.capacity()<<" ";//1 filhal..
    // cout<<v.size()<<endl;
    v.push_back(2);
    cout<<v.capacity()<<" ";//double the previous cap.. ==2
    // cout<<v.size()<<endl;
    v.push_back(3);
    cout<<v.capacity()<<" ";//double the previous capacit==4
    // cout<<v.size()<<endl;
    v.push_back(4);
    cout<<v.capacity()<<" ";//capacity==4
    v.push_back(5);
    cout<<v.capacity()<<" ";//capacity==8
    v.push_back(6);
    cout<<v.capacity()<<" ";//capacity==8
    // cout<<v.size()<<endl;
    cout<<endl;
    cout<<"The vector contains: ";
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    cout<<v[4]<<" ";
    cout<<v[5]<<" ";
    return 0;
}
//Ouput: 
/*
The capacity range is: 1 2 4 4 8 8 
The vector contains: 1 2 3 4 5 6   
*/