//More 2d Vector..
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector< vector<int> >v(3,vector<int> (4,2));//most important..yahan jo 3 hai uska mtlb hai ki 3 vector store kar sakta hai..
    //aur baki ek column ke liye new vector define kara hai jiska 4 cols hai and unki values hai "2".
    for(int i=0;i<3;i++){//vector ki rows
        for(int j=0;j<4;j++){//vector ke cols
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//Output:
/*
2 2 2 2 
2 2 2 2 
2 2 2 2 
*/