#include<iostream>
using namespace std;
int main(){
    int day;
    cin>>day;
    switch(day){
        case(1):
        cout<<"Mon"<<endl;
        break;
        case(2):
        cout<<"Tue"<<endl;
        break;
        case(3):
        cout<<"Wed"<<endl;
        break;
        case(4):
        cout<<"Thu"<<endl;
        break;
        case(5):
        cout<<"Fri"<<endl;
        break;
        case(6):
        cout<<"Sat"<<endl;
        break;
        default:
        cout<<"Sunday"<<endl;
        break;
    }
    return 0;
}