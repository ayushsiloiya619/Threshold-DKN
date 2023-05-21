//vector start...
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;//don't need to mention the size...
    v.push_back(1);//push operation...
    v.push_back(2);
    //v[2]=21;//technical error....isko ni pata hai ki aage kya hai..
    v.push_back(3);
    v[0]=23;//update
    v[1]=24;//update
    v[2]=25;//update
    cout<<v[0]<<" ";//print in vector with indices...
    cout<<v[1]<<" ";//access kar rhe hai..
    cout<<v[2]<<" ";
    return 0;
}
//  Output: 23 24 25