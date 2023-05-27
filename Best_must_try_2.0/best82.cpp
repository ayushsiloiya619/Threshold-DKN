//Two sum problem leetcode:
#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;
int main(){
    vector<int>v;// [1 2 3 4 5 6 7 8]
    cout<<"Enter the target: ";
    int x;
    cin>>x;
    cout<<endl;
    cout<<"Enter the size: ";
    int n;
    cin>>n;
    //enter the array..
    for(int i=0;i<n;i++){
        int qt;
        cin>>qt;
        v.push_back(qt);
    }
    //concept..
    for(int i=0;i<=v.size()-2;i++){//second last index
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
    return 0;
}
//Sample Input: 
/*
Enter the target: 7
Enter the size: 6
1 2 3 4 5 6
*/
// Output:
// (0,5)
// (1,4)
// (2,3)
