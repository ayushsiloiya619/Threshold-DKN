#include<iostream>
using namespace std;
int main(){
    int array[5];
    //for each reference...
    for(int &store: array){
        cin>>store;
    }
    /*
    for(int i=1;i<=5;i++){
      cin>>array[i];
    }
    */
    //declare array...
    int max=array[0];
    for(int i=1;i<=5;i++){//loop initialize...
        if(array[i]>max){//condition for checking if found more than max.
            max=array[i];
        }
    }
    cout<<"The max element is: "<<max;
    return 0;
}