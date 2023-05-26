//find the last occurence of x in vector..
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    //kuch input bi chaiye hai.. 
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(10);
    v.push_back(40);
    int x;
    cin>>x;//take input from user which number to search...
    int idx=-1;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x){//compare the elements...
    //         idx=i;//return the index...
    //     }
    // }
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            idx=i;
            break;//dubara pure vector ko iterate hi nhi karna hai agar pata hai last m=se access karne pe mil jayega..
        }
    }
    cout<<idx<<endl;
    return 0;
}
//Sample Input: 10
//Output: 3