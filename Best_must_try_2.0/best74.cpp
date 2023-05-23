//Thoda khel aur pop_back ke sath aur push_back ke sath...
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;//syntax for vector --> (vector<data_type> specify a name) 
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<"The vector contains the element: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"The size of the vector is: ";
    cout<<v.size()<<endl;
    cout<<"The capacity is: ";
    cout<<v.capacity()<<endl;
    cout<<"The vector contains the element: ";
    v.pop_back();//deleting the element from the vector...
    v.pop_back();//dusra element uda diye from teh vector...
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"The size of the vector is : ";
    cout<<v.size()<<endl;
    cout<<"The capacity is: ";
    cout<<v.capacity()<<endl;
    return 0;
}
//Output: 
//Note : When the size == capacity then we will double the capacity..
//Capacity remains same after even performing many opartions of pop_back in vector.